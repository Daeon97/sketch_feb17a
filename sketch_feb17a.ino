#define pinOne 6
#define pinTwo 7
#define pinThree 8

void setup() {
  pinMode(pinOne, OUTPUT);
  pinMode(pinTwo, OUTPUT);
  pinMode(pinThree, OUTPUT);

  digitalWrite(pinOne, HIGH);
  digitalWrite(pinTwo, HIGH);
  digitalWrite(pinThree, HIGH);
  delay(2000);
}

void loop() {
  manipPinOne();
  manipPinTwo();
  manipPinThree();
}

void manipPinOne() {
  digitalWrite(pinOne, HIGH);
  delay(400);
  digitalWrite(pinOne, LOW);
  delay(300);
}

void manipPinTwo() {
  digitalWrite(pinTwo, HIGH);
  delay(350);
  digitalWrite(pinTwo, LOW);
  delay(400);
}

void manipPinThree() {
  digitalWrite(pinThree, HIGH);
  delay(200);
  digitalWrite(pinThree, LOW);
  delay(400);
}
