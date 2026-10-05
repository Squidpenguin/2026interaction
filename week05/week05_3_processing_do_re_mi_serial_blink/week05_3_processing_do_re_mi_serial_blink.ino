//week05_3_processing_do_re_mi_serial_blink
//改自week05_2_processing_do_re_mi_serial_tone_noTone
//會有對應燈號,閃閃發亮
void setup() {
  pinMode(8,OUTPUT); //Buzzer 8 聲音
  pinMode(10,OUTPUT); //對應'0'
  pinMode(11,OUTPUT); //對應'1'
  pinMode(12,OUTPUT); //對應'2'
  pinMode(13,OUTPUT); //對應'3'
  
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
    }
    for (int i=10; i<=13; i++) digitalWrite(i,LOW); //先都暗下來
    if (c>='0' && c<='3') digitalWrite(c-'0'+10, HIGH); //大小寫換算
    if (c=='0') noTone(8);
    if (c=='1') tone(8,523,100); //Do 0.1s
    if (c=='2') tone(8,587,100); //Re 0.1s
    if (c=='3') tone(8,659,100); //Mi 0.1s
}
