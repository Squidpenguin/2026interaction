//week05_1_processing_do_re_mi_Serial
//Arduino跟Processing結合
import processing.serial.*; //USB Serial 外掛
Serial myPort; //myPort 傳 USB Serial 資料
void setup(){
  size(300,200);
  myPort = new Serial(this, "COM3", 9600) ;
}
void draw(){
  
}
void keyPressed(){
  if (key == '1') myPort.write('1');
  if (key == '2') myPort.write('2');
  if (key == '3') myPort.write('3');
}
