//week02_2_arduino_void_setup_pinMod_void_loop_digitalWrit
void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT); //第8腳,Buzzer
}
//Ctrl-R編譯 Ctrl-U上傳電路板
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8,HIGH); //高電位
  delay(1000); //wait 1 second
  //1000ms=1s, 1ms=0.01s
  digitalWrite(8,LOW);
  delay(1000); //1000很慢 10很吵 2有點聲音 1音頻高
}
