void showHomeMenu(){
  lcd.home();
  lcd.print("Time Bomb");
  lcd.setCursor(0,1);
  lcd.print("1:");
  lcd.write(0);
  lcd.print(" 2:");
  lcd.write(1);
  lcd.print(" 3:");
  lcd.write(2);
  lcd.print(" 4:");
  lcd.write(5);
}
extern int pagenumber;
void homePageFunctions(int buttonNumber){
  switch(buttonNumber){
    case 1:
      Serial.println("Button 1 pressed");
      pagenumber=1;
      refreshScreen();
      break;
    case 2:
      Serial.println("Button 2 pressed");
      break;
    case 3:
      Serial.println("Button 3 pressed");
      break;
    case 4:
      Serial.println("Button 4 pressed");
      pagenumber=4;
      refreshScreen();
      break;
    default: 
      break;
  }
}

