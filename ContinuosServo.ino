#include <Servo.h>

Servo servoR;
Servo servoL;

//L R via robot facing user

void setup() {
  servoR.attach(8);
  servoL.attach(7);
  //servoR.write(90);  // turninhg right
  //servoL.write(-90);  // 
  //servoR.write(0);  // BACKWARDS AHHHHHHH
 //servoL.write(180);  // 
 // delay(15);
 // servoR.write(180);  // forwaards???? 
  //servoL.write(0);  // 
  //delay(15);
}

void loop() {}
