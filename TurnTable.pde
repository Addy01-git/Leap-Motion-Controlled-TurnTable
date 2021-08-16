import de.voidplus.leapmotion.*;
import processing.serial.*;

LeapMotion leap;
Serial myPort;

void setup() {
  size(800, 500);
  background(255);
  
  myPort = new Serial(this, "COM8", 9600);
  leap = new LeapMotion(this);
  
  myPort.write('0');
}

void draw() {
  
  background(255);
  myPort.write('0');
  
  for (Hand hand : leap.getHands ()) {
    
    boolean handIsLeft = hand.isLeft();
    boolean handIsRight = hand.isRight();

    hand.draw();
    
    if (handIsLeft) {
      myPort.write('l');
      
    }
    
    else if (handIsRight) {
      myPort.write('r');
      
    }
  } 
  
}
