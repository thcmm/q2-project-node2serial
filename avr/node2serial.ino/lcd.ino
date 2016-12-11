/**
    LCD CTRL
    Description: LCD functions
    Date: Dec 10 2016
    Authors: Galvanize g36 Q2 Group: C.Grabski, S.Hanzlik, K.Ridgley, T.Sarkisian
    lcd_Init() : setup LCD, print welcome msg
    lcd_On() : backlight On
    lcd_Off() : backlight Off
    lcd_displayMessage() : display message string
  * ***
    2DO:
        lcd_displayMessage():
          message centering
          autoscroll functionality
          convert char messages to pointer array : const char* welcomeArr[ ] = {"Welcome2", "EggNogg"};
*/

const char welcome1[ ] = "Welcome2";
const char welcome2[ ] = "EggNogg";

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
  for (int pChar = 0; pChar < sizeof(welcome1) - 1; pChar++) {
    lcd.print(welcome1[pChar]);
    delay(200);
  }

  delay(1000);
  lcd.setCursor(7, 1);
  for (int pChar2 = 0; pChar2 < sizeof(welcome2) - 1; pChar2++) {
    lcd.print(welcome2[pChar2]);
    delay(200);
  }
}





