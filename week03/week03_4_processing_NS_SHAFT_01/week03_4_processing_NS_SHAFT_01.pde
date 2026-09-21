//week03_4_processing_NS_SHAFT_01
void setup(){
  size(600,600);
}
void draw(){
  background(0,5,95);
  fill(47,105,190); //左右磚色彩
  for (int i=0; i<=10; i++){
    rect(0,i*60,25,60); //左邊的牆
    rect(600-25,i*60,25,60); //右邊的牆
  }
}
