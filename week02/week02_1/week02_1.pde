//week02_1_
//File-Preference 字型放大
void setup(){
  size(500,500);
}
void draw(){
  if (mousePressed) background(#BE77FF);
  else background(#FF79BC);
  fill (0,0,255); //藍色填充色
  textSize(80);
  text("key:" + key,200,300);
}
