int rightGreen = 12;
int leftGreen = 11;
int leftRed = 10;
int rightRed = 9;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(rightGreen, OUTPUT);
  pinMode(leftGreen, OUTPUT);
  pinMode(rightRed, OUTPUT);
  pinMode(leftRed, OUTPUT);     

}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(rightGreen, HIGH);
  delay(250);
  digitalWrite(rightGreen, LOW);
  delay(250);
  
}
//digitalWrite(rightRed, LOW);
  //delay(1000);
