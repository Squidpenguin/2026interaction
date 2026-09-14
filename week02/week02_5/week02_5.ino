//week02_5
//Processing按下key1 2 3 : Arduino Do Re Mi 使用 USB Serial
void setup() {
  Serial.begin(9600); //USB傳輸,9600bps
}

void loop() {
  if (Serial.available()){
    char c = Serial.read();
    if (c=='1') tone(8,523,1000); //Do 1s
    if (c=='2') tone(8,587,1000); //Re 1s
    if (c=='3') tone(8,659,1000); //Mi 1s
    }
}
