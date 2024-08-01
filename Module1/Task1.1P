void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  int temp = analogRead(A0);
  float voltage = temp * 5.0;
  voltage /= 1024.0;
  temp = (voltage - 0.5) * 100;
  Serial.println("Temperature: " + String(temp) + " Celsius");
  if (temp > 0) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  if (temp > 40) {
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW);
  }
  if (temp > 80) {
    digitalWrite(11, HIGH);
  } else {
    digitalWrite(11, LOW);
  }
  delay(1000); // Delay a little bit to improve simulation performance
}
