void setup() 
{
  pinMode(12,OUTPUT);
  pinMode(13,INPUT);
}

void loop() 
{
  int a=digitalRead(13);
  if(a==HIGH)
  {
    digitalWrite(12,HIGH);
  }
  else
  {
    digitalWrite(12,LOW);
  }
}
