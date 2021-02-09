//////////////////////////////////////////////////////////
//////////Code WOrks for Sonar with PWM Pin Online////////
//////////////////////////////////////////////////////////

#include <Servo.h> 
Servo myservo;
int pos = 0;

const int pwPin = 7;
//variables needed to store values
long pulse, inches, cm, cm1, cm2; 



void setup() {
  myservo.attach(8);
  //This opens up a serial connection to shoot the results back to the PC console
  Serial.begin(9600);
  delay(2000);
  myservo.write(0);
  delay(500);
  myservo.write(180);

}

void loop() {

  for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(200);
    /////////////////////////////////
    pinMode(pwPin, INPUT);
    pulse = pulseIn(pwPin, HIGH);
    inches = pulse/147;
    cm = (pulse/147) * 2.54;
    Serial.println(cm);
  } 
} 

