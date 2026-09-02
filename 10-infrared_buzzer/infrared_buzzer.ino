int sensorPin = 2;   
int buzzerPin = 8;   
int sensorValue;

void setup()
{
  Serial.begin(9600);

  pinMode(sensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  sensorValue = digitalRead(sensorPin);

  if (sensorValue == LOW)   // Object detected
  {
    digitalWrite(buzzerPin, HIGH);
    Serial.println("Object Detected");
  }
  else
  {
    digitalWrite(buzzerPin, LOW);
    Serial.println("No Object");
  }

  delay(200);
}