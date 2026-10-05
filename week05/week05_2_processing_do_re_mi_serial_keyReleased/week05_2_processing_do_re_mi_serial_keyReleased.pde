//week05_2_processing_do_re_mi_serial_keyReleased
//修改自week05_1
import processing.serial.*;
Serial myPort;
void setup(){
  size(300,200);
  myPort = new Serial(this, "COM3", 9600);
}
void draw(){

}
int p1 = 0, p2 = 0, p3 = 0; //變數記錄按鍵
void keyPressed(){
  if (p1==0 && key=='1') myPort.write('1');
  if (p2==0 && key=='2') myPort.write('2');
  if (p3==0 && key=='3') myPort.write('3');
  
  if (p1==0 && key=='1') p1 = 1;
  if (p2==0 && key=='2') p2 = 1;
  if (p3==0 && key=='3') p3 = 1;
}
void keyReleased(){
  if (key=='1') p1 = 0; //放開1鍵
  if (key=='2') p2 = 0; //2
  if (key=='3') p3 = 0; //3
  myPort.write('0');
}
