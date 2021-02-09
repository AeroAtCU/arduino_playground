#include <Stepper.h>

const int stepsPerRevolution = 2048;  // change this to fit the number of steps per revolution
// for your motor

// initialize the stepper library on pins 8 through 11:
Stepper Stepper1(stepsPerRevolution, 8, 10, 9, 11);

int stepCount = 0;         // number of steps the motor has taken
long target_deg = 0;
long target_steps = 0;

void setup() {
  // initialize the serial port:
  Stepper1.setSpeed(5);
  Serial.begin(9600);
}

void loop() {

  while (Serial.available() == 0) {
    // Wait for User to Input Data
  }
  target_deg = Serial.parseInt(); 
  target_steps = target_deg*stepsPerRevolution/360;
    Serial.println(target_steps);
  Serial.print(target_steps);
  // step one step:
    Stepper1.step(target_steps);
    Serial.print("steps:");
    Serial.println(target_steps);
    delay(84); // max number of things 
  
}
