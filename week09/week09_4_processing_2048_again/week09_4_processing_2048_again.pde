//week09_4_processing_2048_again
//自己寫 2048 配上聲音，從簡單到完整
void setup(){
  size(550,550);
}
void draw(){
  background(255, 242, 204); //淡淡的背景色
  noStroke(); //不要黑線
  fill(119, 110, 101);
  rect(40, 40, 450, 450, 9);//大格子
  for(int i=0; i<4; i++){ //用迴圈，畫4*4格子
    for(int j=0; j<4; j++){
      int x = 50 + j * (100+10);
      int y = 50 + i * (100+10); //加點位移、間隔
      fill(238,228,218);
      rect(x, y, 100, 100, 6);
    }
  }
}
