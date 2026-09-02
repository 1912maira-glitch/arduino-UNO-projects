bool state=0;
void setup() 
{
pinMode(7, INPUT_PULLUP);
pinMode(13, OUTPUT);
}

void loop() 
{
state=!digitalRead(7);
if(state==0)
{
  digitalWrite(13, LOW);
}
else
{
  digitalWrite(13, HIGH);
}
}