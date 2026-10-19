//week07_1_processing_audio_SoundFile_play
import processing.sound.*;
SoundFile sound;
void setup(){
  size(300,300);
  sound = new SoundFile(this, "music.mp3");
  sound.play();
}
void draw(){

}
