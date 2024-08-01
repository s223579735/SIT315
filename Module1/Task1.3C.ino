const int led1 = 13;
const int led2 = 12;
const int led3 = 11;
const int sensor = 2;
const int sensor2 = 3;

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(sensor, INPUT);
  attachInterrupt(digitalPinToInterrupt(sensor), detectMotion, CHANGE);
  attachInterrupt(digitalPinToInterrupt(sensor2), detectTilt, CHANGE);
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
    Serial.println("Motion stopped");
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
}

void detectTilt(){
  int state = digitalRead(sensor2);
  if (state == HIGH) {
    Serial.println("Tilt up");
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  } else {
    Serial.println("Tilt down");
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
}
