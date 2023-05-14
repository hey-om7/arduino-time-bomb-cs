void showLEDMenu(){
  lcd.home();
 	lcd.setCursor(0, 0);
  lcd.print("Set LED status?");
	lcd.setCursor(0, 1);
  lcd.print("1:");
  lcd.write(4);
  lcd.print(" 2:");
  lcd.print("On 3:Off");


}
extern int pagenumber;
void ledPageFunctions(int buttonNumber){
  switch(buttonNumber){
    case 1:
      pagenumber=0;
      refreshScreen();
      break;
    case 2:
      infoPage("Led State set to Active");
      pagenumber=0;
      refreshScreen();
      break;
    case 3:
      infoPage("Led State set to Off");
      pagenumber=0;
      refreshScreen();
      break;
    default:
    break;
    }
}