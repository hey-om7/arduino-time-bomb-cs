
void infoPage(String info){
  lcd.clear();
  lcd.home();
 	lcd.setCursor(0, 0);
  lcd.write(6);
  lcd.print(" ");
  if(info.length()>14){
  lcd.print(info.substring(0,14));

 	lcd.setCursor(0, 1);
  lcd.print(info.substring(14,info.length()));

  }else{
  lcd.print(info);

  }

  delay(2500);

}