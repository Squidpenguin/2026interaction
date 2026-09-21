//week03_3_arduino_flow_LED
void setup() {
  for (int i=2; i<=13; i++) pinMode(i,OUTPUT); //全亮
}

void loop() {
    for (int i=2; i<=13; i++){
        for (int k=2; k<=13; k++) digitalWrite(k,LOW); //全暗
        digitalWrite(i,HIGH); //把 i 變亮
        delay(100);
    }
}
