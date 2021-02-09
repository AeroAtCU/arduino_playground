int led = 12;

void setup(){
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  int i = 2;
  int j = 5;
  int k;
  
  k = myMultiplyFunction(i, j); // k now contains 6
  Serial.println(k);
  
  if (k == 10)
  {
    digitalWrite(led, HIGH);
    delay(1000);
  }
  else
  {
     digitalWrite(led, LOW);
  }
  Serial.println("Hello World!");  
  digitalWrite(led, LOW);
  delay(2000);
}

int myMultiplyFunction(int x, int y){
  int result;
  result = x * y;
  return result;
  
}
