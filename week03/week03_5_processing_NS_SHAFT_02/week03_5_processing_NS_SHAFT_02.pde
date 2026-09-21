//week03_5_processing_NS_SHAFT_02
void setup(){
  size(600,600);
  for (int i=0; i<20; i++) floorX[i] = int(random(25, 600-140-25));
}
int [] floorX = new int[20];
void draw(){
  background(0,5,95);
  fill(47,105,190); //左右磚色彩
  for (int i=0; i<=10; i++){
    rect(0,i*60,25,60); //左邊的牆
    rect(600-25,i*60,25,60); //右邊的牆
  }
  fill(208,216,189); //draw floor
  for (int i=0; i<20; i++){
    rect(floorX[i], 75+i*75, 140, 25);
  }
}
