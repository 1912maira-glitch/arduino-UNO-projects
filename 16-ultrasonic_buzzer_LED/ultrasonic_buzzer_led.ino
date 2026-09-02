int trigPin = 9;
int echoPin = 8;
int ledPin = 7;
int buzzerPin=11;
float time, distance;

void setup()
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  time = pulseIn(echoPin, HIGH);
  distance = (0.034 * time) / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(500);

  if (distance < 30)
  {
    digitalWrite(ledPin, HIGH);   // LED ON
  }
   else
  {
    digitalWrite(ledPin, LOW);    // LED OFF
  }

 // buzzer sound variations
 if (distance < 10)
{
  digitalWrite(buzzerPin, HIGH);
  delay(100);
  digitalWrite(buzzerPin, LOW);
  delay(100);
}
else if (distance < 20)
{
  digitalWrite(buzzerPin, HIGH);
  delay(200);
  digitalWrite(buzzerPin, LOW);
  delay(200);
}
else if (distance < 30)
{
  digitalWrite(buzzerPin, HIGH);
  delay(500);
  digitalWrite(buzzerPin, LOW);
  delay(500);
}
else if (distance < 50)
{
  digitalWrite(buzzerPin, HIGH);
  delay(100);
  digitalWrite(buzzerPin, LOW);
  delay(1000);
}
else
{
  digitalWrite(buzzerPin, LOW);
}
}