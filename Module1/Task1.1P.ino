const int led1 = 13;
const int led2 = 12;
const int led3 = 11;
const int sensor = 2;

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(sensor, INPUT);
  attachInterrupt(digitalPinToInterrupt(sensor), detectMotion, CHANGE);
}

void loop() {
  delay(200);
}

void detectMotion() {
  int state = digitalRead(sensor);
  if (state == HIGH) {
    Serial.println("Motion detected");
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  } else {
    Serial.println("No motion");
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
}
