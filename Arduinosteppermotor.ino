#include <Stepper.h>
const int stepsperRevolution =2048;
int motSpeed=10;
Stepper myStepper(stepsperRevolution, 8, 9, 10,11);
int stepcount =0;
void setup(){
  myStepper.setSpeed(motSpeed);
}
void loop(){
  myStepper.step(stepsperRevolution);
  delay(500);
  myStepper.step(stepsperRevolution);
  delay(500);
  
}
