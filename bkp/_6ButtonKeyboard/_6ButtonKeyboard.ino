int b1 = 0;
int b2 = 0;
int b3 = 0;
int b4 = 0;
int b5 = 0;
int b6 = 0;
int var = 0;
int subvar = 0;

void setup() {
  Serial.begin(9600);
  Serial.write("Begin Typing");
  pinMode(b1, INPUT);
  pinMode(b1, INPUT);
  pinMode(b1, INPUT);
  pinMode(b1, INPUT);
  pinMode(b1, INPUT);
  pinMode(b1, INPUT);
}

void loop() {
  if (digitalRead(b1) == 1) {
    var = var + 1;
  }
  if (digitalRead(b2) == 1) {
    var = var - 1;
  }
  if (digitalRead(b3) == 1) {
    var = var + 2;
  }
  if (digitalRead(b4) == 1) {
    var = var + 5;
  }
  if (digitalRead(b5) == 1) {
    var = var + 10;
  }
  if (digitalRead(b6) == 1) {
    subvar = 1;
  }

  switch (var, digitalRead(subvar) == 1) {
  case 0:
    Serial.print(" ");
    break;
  case 1:
    Serial.print("A");
    break;
  case 2:
    Serial.print("B");
    break;
  case 3:
    Serial.print("C");
    break;
  case 4:
    Serial.print("D");
    break;
  case 5:
    Serial.print("E");
    break;
  case 6:
    Serial.print("F");
    break;
  case 7:
    Serial.print("G");
    break;
  case 8:
    Serial.print("H");
    break;
  case 9:
    Serial.print("I");
    break;
  case 10:
    Serial.print("J");
    break;
  case 11:
    Serial.print("K");
    break;
  case 12:
    Serial.print("L");
    break;
  case 13:
    Serial.print("M");
    break;
  case 14:
    Serial.print("N");
    break;
  case 15:
    Serial.print("O");
    break;
  case 16:
    Serial.print("P");
    break;
  case 17:
    Serial.print("Q");
    break;
  case 18:
    Serial.print("R");
    break;
  case 19:
    Serial.print("S");
    break;
  case 20:
    Serial.print("T");
    break;
  case 21:
    Serial.print("U");
    break;
  case 22:
    Serial.print("V");
    break;
  case 23:
    Serial.print("W");
    break;
  case 24:
    Serial.print("X");
    break;
  case 25:
    Serial.print("Y");
    break;
  case 26:
    Serial.print("Z");
    break;
  case 27:
    Serial.print(".");
    break;
  case 28:
    Serial.print(",");
    break;
  case 29:
    Serial.println("");
    break;
  }


}




