#include <Servo.h>
Servo myservo;
int value=0;
int mappedvalue;

void setup() 
{
  myservo.attach(10);
}

void loop() 
{
value=analogRead(A0);
mappedvalue=map(value,0,1023,0,180);
myservo.write(mappedvalue);
}