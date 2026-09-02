int trigPin=8;
int echoPin=9;
float time,distance;

void setup() 
{
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
}

void loop() 
{
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);

time=pulseIn(echoPin,HIGH);
distance=(0.034*time)/2;
Serial.println(distance);
delay(500);
}