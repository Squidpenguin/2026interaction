//week06_3_processing_rotate_translate_rotate_rect
void setup(){
  size(500,500);
}
void draw(){
  background(0);
  translate(250,250);
  rotate(radians(frameCount));
  rect(-200,-200,400,400);
}
