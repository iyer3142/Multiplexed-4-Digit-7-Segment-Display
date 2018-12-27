int time = 5;

int pinA  = 9;
int pinB  = 8;
int pinC  = 7;
int pinD  = 6;
int pinE  = 5;
int pinF  = 4;
int pinG  = 3;
int pinDP  = 2;
  
int DIG1  = 13;
int DIG2  = 12;
int DIG3  = 11;
int DIG4  = 10;

void chooseDigit(char num)  {
  switch(num) {
    default:
                                        // 0 DEFAULT
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, LOW);
  digitalWrite(pinDP, LOW);
  break;

  case 1:
                                          //1
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinDP, LOW);
  break;

  case 2:
                                          //2
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinDP, LOW);
  break;

  case 3:
                                          //3
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinDP, LOW);
  break;

  case 4:
                                          //4
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinDP, LOW);
  break;

  case 5:
                                          //5
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinDP, LOW);
  break;

  case 6:
                                          //6
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinDP, LOW);
  break;

  case 7:
                                          //7
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinDP, LOW);
  break;

  case 8:
                                          //8
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinDP, LOW);
  break;

  case 9:
                                          //9
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinDP, LOW);
  break;
  }
}
void setup() {
  
  pinMode(DIG1, OUTPUT);
  pinMode(DIG2, OUTPUT);
  pinMode(DIG3, OUTPUT);
  pinMode(DIG4, OUTPUT);

  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinDP, OUTPUT);
  Serial.begin(9600);
}

void pickDigit(int digit) {
  digitalWrite(DIG1, LOW);
  digitalWrite(DIG2, LOW);
  digitalWrite(DIG3, LOW);
  digitalWrite(DIG4, LOW);

  switch(digit) {
    case 1: digitalWrite(DIG1, HIGH); break;
    case 2: digitalWrite(DIG2, HIGH); break;
    case 3: digitalWrite(DIG3, HIGH); break;
    default: digitalWrite(DIG4, HIGH); break;
  }
}

void sevenSegment(int number) {
  unsigned char thousands = int (number/1000);
  unsigned char hundreds  = int ((number/100)%10);
  unsigned char tens      = int ((number/10)%10);
  unsigned char ones      = int (number%10);
  
  chooseDigit(thousands);
  pickDigit(1);
  delay(time);

  
  chooseDigit(hundreds);
  pickDigit(2);
  delay(time);

  
  chooseDigit(tens);
  pickDigit(3);
  delay(time);

  
  chooseDigit(ones);
  pickDigit(4);
  delay(time);
  
}
void loop() {
  sevenSegment(3142);  
  delay(1);
}
