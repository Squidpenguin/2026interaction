//week05_1_arduino_do_re_mi_serial
//week02_5
//Processing按下key1 2 3 : Arduino Do Re Mi 使用 USB Serial
void setup() {
  Serial.begin(9600); //USB傳輸,9600bps
  tone(8,523,100); //Do 0.1s
  delay(200);
  tone(8,587,100); //Re
  delay(200);
  tone(8,659,100); //Mi
}

void loop() {
  if (Serial.available()){
    char c = Serial.read();
    if (c=='1') tone(8,523,100); //Do 0.1s
    if (c=='2') tone(8,587,100); //Re 0.1s
    if (c=='3') tone(8,659,100); //Mi 0.1s
    }
}
