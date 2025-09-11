/* Connection Setups 

- VCC of LCD to +5V of AV3
- GND of LCD to GND of AV3 
- SDA of LCD to SDA of AV3 (GPIO21)
- SCL of LCD to SCL of AV3 (GPIO22)

*/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
TwoWire Wire(1);
LiquidCrystal_I2C lcd(0x27 , 16, 2);
void setup()
{
lcd.init(); //initialize the lcd
lcd.backlight();
}
void loop()
{
lcd.clear();    //clear display
lcd.setCursor(0, 0);   //move cursor to (0,0)
lcd.print("Greetings");  //print msg at (0,0)
lcd.setCursor(2, 1);  //move cursor to (2,1)
lcd.print("From ");   //print msg at (2,1)
 delay(2000);

 lcd.clear();       //clear display
lcd.setCursor(3, 0);   //move cursor to (3,0)
lcd.print("NIELIT");  //print msg at (3,0)
lcd.setCursor(0, 1);  //move cursor to (0,1)
lcd.print("Aurangabad ");   //print msg at (0,1)
 delay(2000);
}

