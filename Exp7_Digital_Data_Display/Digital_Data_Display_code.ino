#include<LiquidCrystal.h>
int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal(rs,en,d4,d5,d6,d7);

void setup()
{
  lcd.begin(16,2);
  lcd.clear();
}
void loop()
{
lcd,print("HELLO WORID");
delay(5000);

}
