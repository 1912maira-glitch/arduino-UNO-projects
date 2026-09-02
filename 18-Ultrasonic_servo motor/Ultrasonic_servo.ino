#include <Servo.h>

int trigPin = 9;
int echoPin = 8;
int servoPin = 3;

float time, distance;

Servo myservo;

void setup()
{
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  myservo.attach(servoPin);
}

void loop()
{
  // Trigger ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  // Read echo
  time = pulseIn(echoPin, HIGH);

  // Calculate distance
  distance = (0.034 * time) / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 30)
  {
    myservo.write(0);
    Serial.println("Angle: 0");
  }
  else if (distance > 15 && distance <= 30)
  {
    myservo.write(90);
    Serial.println("Angle: 90");
  }
  else if (distance >= 0 && distance <= 15)
  {
    myservo.write(180);
    Serial.println("Angle: 180");
  }

  delay(500);
}