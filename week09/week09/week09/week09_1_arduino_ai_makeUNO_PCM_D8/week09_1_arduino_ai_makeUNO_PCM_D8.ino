//week09_1_arduino_ai_makeUNO_PCM_D8
//想要 MakeUNO 發出更多元的聲音，不只是用單調的 tone()
//示範用AI找出答案
//Q1:MakeUNO本身可以用 pin 8 的 buzzer 利用 tone() 來發出單調的聲音。
//Q2:請幫我找 PCM 相關的 libraries 我想試試看
//Q3:如何修改 PCM Library ，讓他利用 pin 8 的軟體 PWM 或其他輸出技術播放 PCM
//這時，AI給我們修改後的 MakeUNO_PCM_D8.zip 解開來，把 MakeUNO_PCM_D8
//Q4:我在編譯時，出現 PCM.h 的錯誤，訊息如下
//把 PCM.cpp PCM.h sounddata.h 都放在你的目錄 week09

//Make UNO: turn ON the onboard BUZZER slide switch.
//Board selection: Arduino UNO / ATmega328P / 16 MHz.
//This sketch uses the local modify PCM.cpp,NOT the original D11

#include "PCM.h"
#include "sounddata.h"
void setup(){
  startPlayback(sounddata_data, sounddata_length);  
}
void loop(){
  //One-shot sample plays for 1 second. Press RESET to play again.  
}
