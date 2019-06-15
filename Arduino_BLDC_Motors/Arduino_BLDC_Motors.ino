/*
    Arduino Brushless Motors Control
*/

#include <Servo.h>

Servo ESC;  // Create Servo Object to control the ESC
int i = 0;
int sig = 0;

void setup() {
  // put your setup code here, to run once:
  // Attach the ESC on pin 9
  ESC.attach(10,1000,2000); // (pin, min pulse width, max pulse width in microsec)
}

void loop() {
  // put your main code here, to run repeatedly:
  if(!i)
  {
    ESC.write(0); // Send the signal to ESC (send something between 0,180)
    delay(1000);
    i = 1;
  }
  /*if(190==sig)
    sig = 0;
  ESC.write(sig);
  delay(3000);
  sig = sig + 10;*/
  ESC.write(100);
}
