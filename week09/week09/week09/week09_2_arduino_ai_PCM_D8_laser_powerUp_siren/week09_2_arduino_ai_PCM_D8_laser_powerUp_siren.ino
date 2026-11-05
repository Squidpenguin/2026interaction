//week09_2_arduino_ai_PCM_D8_laser_powerUp_siren
//想要發出更特別的聲音，有滑落
//Q5:剛剛的 week09_1_arduino_ai_makeUNO_PCM_D8 改自 MakeUNO_PCM_D8.zip成功了
//做week09_2想要比較精彩、好聽、有變化的聲音，而且希望聲音

#include "PCM.h"
#include "sounddata.h"
void playClip(const unsigned char* data, int sampleCount) {
  startPlayback(data, sampleCount);
  //8 kHz PCM; delay() still runs because this version uses Timer1.
  delay((unsigned long)sampleCount / 8 + 25);
  stopPlayback();
}
void setup() {
  pinMode(8, OUTPUT);
  digitalWrite(8, LOW);
}
void loop() {
  playClip(laser_data, laser_length); //falling laser swoosh
  delay(220);
  playClip(powerup_data, powerup_length); //four rising arcade notes
  delay(220);
  playClip(siren_data, siren_length); //warbling sci-fi siren
  delay(1500);
}
