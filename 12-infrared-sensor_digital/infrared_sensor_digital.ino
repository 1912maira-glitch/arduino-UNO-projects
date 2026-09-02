int sensorpin=2;
int sensorvalue;

void setup() 
{
Serial.begin(9600);
pinMode(sensorpin, INPUT);
}

void loop() 
{
sensorvalue= digitalRead(sensorpin);
 if(sensorvalue == LOW)
  {
    Serial.println("Object  Detected");
  }
  else
  {
    Serial.println("No Object Detected");
  }
  delay(200);
}