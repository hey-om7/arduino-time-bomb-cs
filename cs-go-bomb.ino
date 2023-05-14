#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <Arduino.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  Serial.begin(9600);
	lcd.begin();
	lcd.backlight();
  addCustomChars();
	// showIntro();
  showHomeMenu();
  
  
  


}
int timedelayinInput=0;
int pagenumber=0;
 
void loop()
{
 
  // lcd.scrollDisplayLeft();
  // delay(500); 
  // if(counter==16){
  //   counter=0;
  //   lcd.home();
  // }
  // counter++;

	


 if (Serial.available() > 0) { // Check if there's any data available to read
    timedelayinInput=0;
    int incoming = Serial.parseInt();
    Serial.println("got data:"+String(incoming));
    checkButtonInput(incoming);
  }
  timedelayinInput++;
  delay(100);
  if(timedelayinInput>=30 and pagenumber!=0){
    pagenumber=0;
    refreshScreen();
  }


}
//0:homepage
//1:bombpage
//5:bombactive

void checkButtonInput(int buttonNumber){
  switch(pagenumber){
    case 0:
      homePageFunctions(buttonNumber);
      break;
    case 1:
      bombPageFunctions(buttonNumber);
      break;


    case 4:
      ledPageFunctions(buttonNumber);
      break;
    
    default:
    break;
  }


}

