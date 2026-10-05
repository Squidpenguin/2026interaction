//week05_2_processing_do_re_mi_serial_tone_noTone
//改自week05_1_arduino_do_re_mi_serial
//Processing按下key1 2 3 : Arduino Do Re Mi 使用 USB Serial
void setup() {
  Serial.begin(9600); //USB傳輸,9600bps
  tone(8,523,100); delay(200); //Do
  tone(8,587,100); delay(200); //Re
  tone(8,659,100); delay(200); //Mi
  tone(8,587,100); delay(200); //Re
  tone(8,523,100); delay(200); //Do
}
char c = '0';
void loop() {
  if (Serial.available()){
    c = Serial.read();
    if (c=='0') noTone(8);
    if (c=='1') tone(8,523,100); //Do 0.1s
    if (c=='2') tone(8,587,100); //Re 0.1s
    if (c=='3') tone(8,659,100); //Mi 0.1s
    }
}
