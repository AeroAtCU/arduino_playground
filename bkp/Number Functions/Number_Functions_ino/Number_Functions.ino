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
 drawNum("9", 1000);
 drawNum("8", 1000);
 drawNum("7", 1000);
 drawNum("6", 1000);
 drawNum("5", 1000);
 drawNum("4", 1000);
 drawNum("3", 1000);
 drawNum("2", 1000);
 drawNum("1", 1000);
 drawNum("0", 1000);
 drawNum("+", 1000);
}

void drawNum(String input, int number) {
 ms=millis();
 while(millis()-ms<=number) {
  drawNumber(input); 
 }
}

void drawNumber(String num){
    if(num=="9"){
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
      digitalWrite(e, HIGH);
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

    if(num=="8"){
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
      digitalWrite(e, HIGH);
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

    if(num=="7"){
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
      digitalWrite(e, HIGH);
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

    if(num=="6"){
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
      digitalWrite(d, HIGH);
      digitalWrite(j, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(j, LOW);
    }

    if(num=="5"){
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
      digitalWrite(a, HIGH);
      digitalWrite(k, HIGH);
      digitalWrite(a, LOW);
      digitalWrite(k, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(k, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(k, LOW);
    }

    if(num=="4"){
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

    if(num=="3"){
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

    if(num=="2"){
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

    if(num=="1"){
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

    if(num=="0"){
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
      digitalWrite(e, HIGH);
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

    if(num=="+"){
      digitalWrite(a, HIGH);
      digitalWrite(i, HIGH);
      digitalWrite(a, LOW);
      digitalWrite(i, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(j, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(j, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(i, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(i, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(h, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(h, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(i, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(i, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(h, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(h, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(j, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(j, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(i, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(i, LOW);
      digitalWrite(g, HIGH);
      digitalWrite(i, HIGH);
      digitalWrite(g, LOW);
      digitalWrite(i, LOW);
      digitalWrite(e, HIGH);
      digitalWrite(i, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(i, LOW);
    }

}
