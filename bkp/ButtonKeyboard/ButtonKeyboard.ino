///////////////
//An Examples//
///////////////


const int button1 = 2;   
const int submit = 3;// the number of the pushbutton pin
int var = 0;
int buttonState = 0;         // variable for reading the pushbutton status
String letterval = "";

void setup() {
  Serial.begin(9600);
  pinMode(button1, INPUT);  
  pinMode(submit, INPUT);  
}

void loop(){
  if (digitalRead(button1) == 1) {
    var = var + 1;
  }
  
  if (var == 1) {
    letterval = "a";
  }
  if (var == 2) {
    letterval = "b";
  }
    
  if (digitalRead(submit) == 1) {
    Serial.println(letterval);
  }
  
  
}
