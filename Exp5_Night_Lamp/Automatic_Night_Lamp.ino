void setup()
{
  Serial.begin(9600);
  pinMode(8,OUTPUT);
}
void loop()
{
  int a=analogRead(A5);
  Serial.println(a);
  if(a<370)
  {
    digitalWrite(8,HIGH);
  }
  else
  {
    digitalWrite(8,LOW);
  }
}
