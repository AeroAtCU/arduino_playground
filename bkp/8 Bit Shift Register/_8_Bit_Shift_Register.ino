int latch = 8;
int clock = 12;
int data = 11;

void setup() {
  pinMode(latch, OUTPUT);
  pinMode(clock, OUTPUT);
  pinMode(data, OUTPUT);
  
  cclear(); //Clear to make sure everythings tight
  
  zer(); //input all bits, form right to left!
  one();
  zer();
  one();
  zer();
  one();
  zer();
  one();
  
  ssend();  //input code
  
}

void loop() {
}

void cclear() {
  //set all to zero
  zer();
  zer();
  zer();
  zer();
  zer();
  zer();
  zer();
  zer();
}

void one() {
  //just an abbreviation of dchigh
  dchigh();
}

void zer() {
  //another abbreviation for chigh
  chigh();
}

void dchigh() {
  //start clock, input a one, close clock. (make the bit a 1)
  digitalWrite(data, HIGH);
  digitalWrite(clock, HIGH);
  digitalWrite(clock, LOW);
  digitalWrite(data, LOW);
}

void chigh() {
  //start and stop clock. (make the bit a 0)
  digitalWrite(clock, HIGH);
  digitalWrite(clock, LOW);
}

void ssend() {
  //start latch, then stop. (send the bits)
  digitalWrite(latch, HIGH);
  digitalWrite(latch, LOW);
}
