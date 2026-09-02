bool state=0;
void setup() 
{
Serial.begin(9600);  
pinMode(7, INPUT_PULLUP);
}

void loop() 
{
state=digitalRead(7);
Serial.println(state);
}