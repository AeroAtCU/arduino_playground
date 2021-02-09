int a = 13;
int b = 12;
int c = 11;
int d = 10;
int e = 9;
int f = 8;
int g = 7;
int h = 6;
int i = 5;
int j = 4;
int k = 3;
int l = 2;
long ms;

void setup() {                

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);  
  pinMode(h, OUTPUT);
  pinMode(i, OUTPUT);
  pinMode(j, OUTPUT);
  pinMode(k, OUTPUT);
  pinMode(l, OUTPUT);
}


void loop() {
 
  ms=millis();
 while(millis()-ms<=500) {
  numberzero(); 
 } 
  
 ms=millis();
 while(millis()-ms<=500) {
  numberone(); 
 }
 
 ms=millis();
 while(millis()-ms<=500) {
  numbertwo(); 
 }
 
  ms=millis();
 while(millis()-ms<=500) {
  numberthree(); 
 }
  
  ms=millis();
 while(millis()-ms<=500) {
  numberfour(); 
 }

  ms=millis();
 while(millis()-ms<=500) {
  numberfive(); 
 }

  ms=millis();
 while(millis()-ms<=500) {
  numbersix(); 
 }
 
  ms=millis();
 while(millis()-ms<=500) {
  numberseven(); 
 }
 
  ms=millis();
 while(millis()-ms<=500) {
  numbereight(); 
 }
 
  ms=millis();
 while(millis()-ms<=500) {
  numbernine(); 
 }
}


void numbernine() {
 
  digitalWrite(a, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(i, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(j, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(h, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(h, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(h, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(j, LOW);
  digitalWrite(e, HIGH); //problem?
  digitalWrite(h, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(h, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(h, LOW);
  digitalWrite(k, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(b, LOW);
  digitalWrite(k, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(c, LOW);
  digitalWrite(i, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(i, LOW);
  digitalWrite(d, LOW);
  
}

void numbereight() {
 
  digitalWrite(a, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(i, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(j, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(i, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(j, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(h, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(h, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(j, LOW);
  digitalWrite(e, HIGH); //problem?
  digitalWrite(h, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(h, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(h, LOW);
  digitalWrite(k, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(b, LOW);
  digitalWrite(k, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(c, LOW);
  digitalWrite(i, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(i, LOW);
  digitalWrite(d, LOW);
  digitalWrite(k, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(e, LOW);
  digitalWrite(k, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(f, LOW);
  
}

void numberseven() {
 
  digitalWrite(a, HIGH);
  digitalWrite(k, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(k, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(j, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(i, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(h, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(h, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(i, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(i, LOW);
  digitalWrite(e, HIGH); //problem?
  digitalWrite(j, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(j, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(j, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(k, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(k, LOW);
}

void numbersix() {
 
  digitalWrite(h, HIGH);
  digitalWrite(a, HIGH);
  digitalWrite(h, LOW);
  digitalWrite(a, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(i, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(j, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(k, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(k, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(k, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(k, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(k, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(k, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(j, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(i, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(h, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(h, LOW); 
  digitalWrite(d, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(i, LOW);
  digitalWrite(d, HIGH); //problem?
  digitalWrite(j, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(j, LOW);
}

void numberfive() {
 
  digitalWrite(k, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(b, LOW);
  digitalWrite(k, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(j, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(i, LOW);
  digitalWrite(h, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(h, LOW);
  digitalWrite(e, LOW);
  digitalWrite(h, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(h, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(i, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(j, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(k, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(k, LOW); 
  digitalWrite(a, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(j, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(i, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(h, LOW);
}

void numberfour() {
 
  digitalWrite(k, HIGH);
  digitalWrite(a, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(a, LOW);
  digitalWrite(k, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(b, LOW);
  digitalWrite(k, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(j, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(i, LOW);
  digitalWrite(h, HIGH);
  digitalWrite(a, HIGH);
  digitalWrite(h, LOW);
  digitalWrite(a, LOW);
  digitalWrite(h, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(h, LOW);
  digitalWrite(b, LOW);
  digitalWrite(h, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(h, LOW);
  digitalWrite(c, LOW);
  digitalWrite(h, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(h, LOW);
  digitalWrite(e, LOW); 
  digitalWrite(h, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(h, LOW);
  digitalWrite(f, LOW);
  digitalWrite(h, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW);
  digitalWrite(g, LOW);

}

void numberthree() {
 
  digitalWrite(a, HIGH);
  digitalWrite(k, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(k, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(j, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(i, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(h, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(h, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(j, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(i, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(h, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(h, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(k, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(k, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(i, LOW); 
  digitalWrite(g, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(j, LOW);
  
}

void numbertwo() {
  
  digitalWrite(b, HIGH);
  digitalWrite(k, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(k, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(j, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(i, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(h, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(h, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(h, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(i, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(j, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(k, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(k, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(k, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(k, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(j, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(i, LOW);
}

void numberone() {
  digitalWrite(b, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(j, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(k, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(k, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(i, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(i, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(i, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(i, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(i, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(i, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(i, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(h, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(k, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(k, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(j, LOW); 
}

void numberzero() {
 
  digitalWrite(a, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(i, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(j, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(i, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(j, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(h, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(h, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(h, LOW);
  digitalWrite(e, HIGH); //problem?
  digitalWrite(h, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(h, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(h, LOW);
  digitalWrite(k, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(b, LOW);
  digitalWrite(k, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(c, LOW);
  digitalWrite(k, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(d, LOW);
  digitalWrite(k, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(e, LOW);
  digitalWrite(k, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(f, LOW);
  
}

digitalWrite(a, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(i, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(j, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(i, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(j, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(j, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(h, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(h, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(h, LOW);
  digitalWrite(e, HIGH); //problem?
  digitalWrite(h, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(h, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(h, LOW);
  digitalWrite(k, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(b, LOW);
  digitalWrite(k, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(c, LOW);
  digitalWrite(k, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(d, LOW);
  digitalWrite(k, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(e, LOW);
  digitalWrite(k, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(f, LOW);

