unsigned long user_entered_bombnumber;
unsigned long generated_bombnumber;
extern int pagenumber;

void showBombMenu(){
  lcd.home();
 	lcd.setCursor(0, 0);
  lcd.print("Enter code to");
	lcd.setCursor(0, 1);
  generated_bombnumber=generatebomb_number();
  user_entered_bombnumber=0;
  lcd.print("plant:"+String(generated_bombnumber));
  lcd.setCursor(6, 1);
  
}


unsigned long generatebomb_number() {
  unsigned long randomNumber = 0;
  for (int i = 0; i < 10; i++) {
    randomNumber *= 10;
    randomNumber += random(1, 5);
  }
  Serial.println(randomNumber);
  return randomNumber;
}
bool bombActive=false;
void checkBombNumber(int userEnteredDigit){
  if(String(user_entered_bombnumber).length()>=10){
    if(user_entered_bombnumber==generated_bombnumber){
      bombActive=true;
      pagenumber=5;
      refreshScreen();
      Serial.println("Bomb Planted!");
    }else{
      Serial.println("Wrong key!!");
      Serial.println("Original key:"+String(generated_bombnumber));
      Serial.println("User key:"+String(user_entered_bombnumber));

      user_entered_bombnumber=0;
      pagenumber=0;
      refreshScreen();
    }
  }
  user_entered_bombnumber*=10;
  user_entered_bombnumber+=userEnteredDigit;


}

void bombPageFunctions(int buttonNumber){
  switch(buttonNumber){
    Serial.println("The length:");
    Serial.print(String(user_entered_bombnumber).length());
     case 1:
      // Serial.println("Button 1 pressed");
      lcd.write(7);
      checkBombNumber(1);
      
      break;
    case 2:
      // Serial.println("Button 2 pressed");
      lcd.write(7);
      checkBombNumber(2);
      break;
    case 3:
      // Serial.println("Button 3 pressed");
      lcd.write(7);
      checkBombNumber(3);
      break;
    case 4:
      // Serial.println("Button 4 pressed");
      checkBombNumber(4);
      lcd.write(7);
      break;
    default: 
      break;
  }
}