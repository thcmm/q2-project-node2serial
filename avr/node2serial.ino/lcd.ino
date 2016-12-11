/**
  * LCD CTRL 
  * Description: LCD functions  
  * Date: Dec 10 2016
  * Authors: Galvanize g36 Q2 Group: C.Grabski, S.Hanzlik, K.Ridgley, T.Sarkisian
  * lcd_Init() : setup LCD, print welcome msg
  * lcd_On() : backlight On
  * lcd_Off() : backlight Off
*/


// Init LCD
void lcd_Init() {
   // set up number of columns and rows:
  lcd.begin(16, 2);
}


// LCD backlight ON
void lcd_On() {
  lcd.noDisplay();
  delay(500);
}

// LCD backlight OFF
void lcd_Off() {
  lcd.display();
  delay(500);
}

void lcd_displayMessage() {
  lcd.setCursor(0, 0);
  //lcd.autoscroll();
  // display message to the LCD.
  lcd.print("Welcome to EggNogg!");
}




