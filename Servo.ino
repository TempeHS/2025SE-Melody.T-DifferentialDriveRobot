#include <Servo.h>

class Main {
  private:
    // creating servo objcts
    Servo servoR;
    Servo servoL;

  public:
    // initializing 
    Main(int pinR, int pinL) {
      servoR.attach(pinR);
      servoL.attach(pinL);
    }

    void goForward() {
      servoR.write(180);  // forward
      servoL.write(0);    //
    }

    void goBackward() {
      servoR.write(0);    // backwards
      servoL.write(180);  // 
    }

    void turnRight() {
      servoR.write(90);   // no mov
      servoL.write(0);    // forward
    }

    void turnLeft() {
      servoR.write(180);  // left foward
      servoL.write(90);   // 
    }
};

  // connecting pins
  Main servo(8, 7); 

void setup() { 

  servo.goForward();   
  delay(15);       

  servo.turnRight(); 
  delay(15);      

  servo.goBackward(); 
  delay(15);      

  servo.turnLeft();  
  delay(15);     
}

void loop() {
  servo.turnRight(); //spinnnnn
}
