int led_red = 7;
int buttonState = 0;
int buttonPin = 2;
void setup()
{
  Serial.begin(9600);
  pinMode(led_red, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() 
{
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH)
  {
    digitalWrite(led_red, HIGH);
  }
  else
  digitalWrite(led_red, LOW);
  int c = analogRead(A0);
  delay(500);
  if (c <300) {
  digitalWrite(led_red, HIGH); 
  delay(1000);   
  }
  else{
  digitalWrite(led_red, LOW);  
  delay(1000);      
}
}
