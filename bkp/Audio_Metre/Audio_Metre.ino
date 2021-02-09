// using the maxsonar quick start http://www.adafruit.com
// http://www.adafruit.com/index.php?main_page=product_info&cPath=35&products_id=172

int sonarPin = 0; //pin connected to analog out on maxsonar sensor
int ledPin = 9; 
int inchesAway; 
int worked;
int lightWasOn = 0;

void setup() {
  //pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}
void on(int pin,int brightness){
  analogWrite(pin,brightness);
}
void off(int pin){
  analogWrite(pin,0);
}
void loop() {
  
  inchesAway = analogRead(sonarPin) /2;
  Serial.println(inchesAway);
  if (inchesAway < 12) {
    lightWasOn = 1;
    on(ledPin,inchesAway^2);
  }else{
    off(ledPin);
  }
  if (lightWasOn==1){
    on(13,150);
    delay(5000);
    off(13);
    delay(5000);
  }
}
