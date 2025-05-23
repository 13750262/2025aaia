//week14_sound
import processing.sound.*;
SoundFile music; //宣告一個變數
void setup(){
  size(640,360);
  music = new SoundFile(this,"In Game music.mp3");
  music.play();
}
void draw(){
   
 }
