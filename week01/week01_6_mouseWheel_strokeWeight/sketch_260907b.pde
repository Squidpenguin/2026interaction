//week01_6_mouseWheel_strokeWeight
//整合week01_4 week01_5 讓大小可以mouse wheel 改變
float circleSize = 5; //小一點
void setup(){
  size(500,500);
  background(255); //white
}
void draw(){
  strokeWeight(circleSize); //筆畫粗細
  if (mousePressed){
    if (mouseButton==LEFT) stroke(0); //畫黑線
    if (mouseButton==RIGHT) stroke(255); //用白色清掉
    line(mouseX,mouseY,pmouseX,pmouseY);
  }
  noStroke();
  rect(0,0,100,100);
  stroke(0);
  strokeWeight(circleSize);
  ellipse(50,50,circleSize,circleSize);
}
void mouseWheel(MouseEvent e){
  circleSize = circleSize - e.getCount();
}
