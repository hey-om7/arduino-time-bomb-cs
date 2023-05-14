
void showIntro(){
  lcd.clear();
  lcd.print("Created by");
	lcd.setCursor(0, 1);
	lcd.print("Om Ambarkar");
  delay(1500);
	lcd.clear();
}
extern int pagenumber;
void refreshScreen(){
  lcd.clear();
  switch(pagenumber){
    case 0:
      showHomeMenu();
      break;
    case 1:
      showBombMenu();
      break;
    case 4:
      showLEDMenu();
    case 5:
      showbombActivePage();
    default:
      break;


  }

}


