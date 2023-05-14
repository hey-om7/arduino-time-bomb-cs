

 byte bombLogo[] = {
  B00011,
  B00100,
  B00100,
  B01110,
  B11011,
  B10101,
  B11011,
  B01110
};
byte settingsLogo[] = {
  B00100,
  B10101,
  B01110,
  B11111,
  B11111,
  B01110,
  B10101,
  B00100
};
byte alarmLogo[] = {
  B01110,
  B00100,
  B01110,
  B10001,
  B10011,
  B10101,
  B10001,
  B01110
};

byte soundLogo[] = {
  B00001,
  B00011,
  B00111,
  B11111,
  B11111,
  B00111,
  B00011,
  B00001
};
byte backButton[] = {
  B00100,
  B01110,
  B11111,
  B00100,
  B00100,
  B00100,
  B00101,
  B00111
};
byte lightBulb[] = {
  B01110,
  B10001,
  B10001,
  B10101,
  B10101,
  B01110,
  B01110,
  B01110
};
byte infoLogo[] = {
  B00100,
  B01110,
  B11111,
  B11111,
  B01110,
  B00100,
  B01010,
  B00100
};
byte asteriskLogo[] = {
  B11011,
  B01010,
  B01110,
  B11111,
  B11111,
  B01110,
  B01010,
  B11011
};
byte bombActiveBuzzerLogo[] = {
  B00000,
  B01110,
  B10101,
  B11111,
  B11111,
  B10101,
  B01110,
  B00000
};
byte bombPassiveBuzzerLogo[] = {
  B00000,
  B01110,
  B10001,
  B10001,
  B10001,
  B10001,
  B01110,
  B00000
};
// byte lockActiveIcon[] = {
//   B00100,
//   B01010,
//   B01010,
//   B01110,
//   B10001,
//   B10101,
//   B10101,
//   B01110
// };
// byte lockPassiveIcon[] = {
//   B01111,
//   B10000,
//   B10000,
//   B01110,
//   B10001,
//   B10101,
//   B10101,
//   B01110
// };


void addCustomChars(){
  lcd.createChar(0, bombLogo);
  lcd.createChar(1, alarmLogo);
  lcd.createChar(2, soundLogo);
  lcd.createChar(3, settingsLogo);
  lcd.createChar(4, backButton);
  lcd.createChar(5, lightBulb);
  lcd.createChar(6, infoLogo);
  lcd.createChar(7, asteriskLogo);
  lcd.createChar(8, bombActiveBuzzerLogo);
  lcd.createChar(9, bombPassiveBuzzerLogo);
  // lcd.createChar(98, lockActiveIcon);
  // lcd.createChar(99, lockPassiveIcon);
}
