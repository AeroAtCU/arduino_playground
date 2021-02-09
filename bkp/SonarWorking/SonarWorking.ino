//////////////////////////////////////////////////////////
//////////Code WOrks for Sonar with PWM Pin Online////////
//////////////////////////////////////////////////////////


const int pwPin = 7;
//variables needed to store values
long pulse, inches, cm, cm1, cm2; 



void setup() {

  //This opens up a serial connection to shoot the results back to the PC console
  Serial.begin(9600);

}

void loop() {

  pinMode(pwPin, INPUT);

    //Used to read in the pulse that is being sent by the MaxSonar device.
  //Pulse Width representation with a scale factor of 147 uS per Inch.

  pulse = pulseIn(pwPin, HIGH);
  inches = pulse/147;
  cm = (pulse/147) * 2.54;
  cm1 = (pulse/147) * 2.54;
  cm2 = (pulse/147) * 2.54;
  
  Serial.println((cm + cm1 + cm2) / 3);
  delay(2000);

} 
