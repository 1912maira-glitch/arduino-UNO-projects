int LEDpin=3;
void setup() 
{
pinMode(LEDpin, OUTPUT);
}

void loop() 
{
  for(int i=0; i<=255; i++)
  {
    analogWrite(LEDpin,i);
    delay(2);
  }

   for(int i=255; i>=0; i--)
  {
    analogWrite(LEDpin,i);
    delay(2);
  }
}