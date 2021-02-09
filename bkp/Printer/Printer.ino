//The Popsicle Printer
//Ian Adler

//servo data
#include <Servo.h>
//servos
Servo servo1;
Servo servo2;
//varas for tmps
int tmp = 0;
int tmp1 = 0;
int tmp2 = 0;
//control a one read per tmp
char alpha = 0;
char beta = 0;
char gamma = 0;
//control time
int onetime = 1;
int con = 1;
//control final number
int sfin1;


void setup() {
  Serial.begin(9600);
  Serial.println("ON");
  servo1.attach(7);
  servo2.attach(8);
}

void loop() {
  //set the vars to q if i've typed 'q'
  if (Serial.available()) {
    alpha = Serial.read();
    beta = alpha;
    gamma = alpha;
  }

  //these set the tmp's to the numbers typed
  while (alpha == 'q') { //while 'q' has been typed
    if (Serial.available()) { //and data is available,
      tmp = Serial.read(); //tmp = first bit of data
      alpha = 'p'; //resest alpha so it doesnt loop
      con = 0; //this comes later
    }
  }
  while (beta == 'q') {
    if (Serial.available()) {
      tmp1 = Serial.read();
      beta = 'p';
    }
  }
  while (gamma == 'q') {
    if (Serial.available()) {
      tmp2 = Serial.read();
      gamma = 'p';
    }
  }


  if (con == 0) { //if the tmp is set to a number
    tmp = tmp - 48; //idk why but the variables kept
    tmp1 = tmp1 - 48; //showing up as the number
    tmp2 = tmp2 - 48; //plus 48, so i fixed that.
    Serial.print("s is "); //print the variables
    Serial.println(tmp);
    Serial.print("s1 is ");
    Serial.println(tmp1);
    Serial.print("s2 is ");
    Serial.println(tmp2);
    onetime = 1;
    con = 1;
  }

  //this line takes the three variables and sets
  //them to the hundreds, tens, and ones place
  sfin1 = (tmp * 100) + (tmp1 * 10) + (tmp2);

  if (sfin1 != 0) { //if sfin isnt 0 (it has been set
    if (onetime == 1) { //and the onetime is one (so it onlyu prints once
      Serial.print("FINAL DEGREE: "); //print this
      Serial.println(sfin1); //and the final degree
      onetime = 0; //reset so it doesnt loop
      if (sfin1 < 180) { //if the number is less than 180
        if (sfin1 > 0) { //but more than 0
          servo1.write(sfin1); //send it to the servo
          Serial.println("VALID"); //print this
        }
      }
      else { //if not
        Serial.println("NOT VALID"); //don't send it to the servo
      }
    }
  }
}





