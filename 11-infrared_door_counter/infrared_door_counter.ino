int sensorPin = 4;
int buzzerPin = 11;

int sensorValue;
int previousState = HIGH;
int counter = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  sensorValue = digitalRead(sensorPin);

  if (sensorValue == LOW)
  {
    digitalWrite(buzzerPin, HIGH);

    if (previousState == HIGH)
    {
      counter++;
      Serial.print("Person Count: ");
      Serial.println(counter);
    }
  }
  else
  {
    digitalWrite(buzzerPin, LOW);
  }
  previousState = sensorValue;
  delay(50);
}