//week06_1_arduino_pin_2_button_INPUT_PULLUP
void setup() {
  pinMode(2, INPUT_PULLUP); //預設pin 2是Button
  pinMode(8, OUTPUT); //預設pin 8是Buzzer喇叭
  tone(8,523,100);
}

void loop() {
  if (digitalRead(2) == LOW){
    tone(8,523,100); //0.1s
    delay(100);
  }
}
