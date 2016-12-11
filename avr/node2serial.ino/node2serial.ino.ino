/**
  * File: node2serial.ino 
  * Description: NodeJS to AVR usb(serial)  
  * Date: Dec 10 2016
  * Authors: Galvanize g36 Q2 Group: C.Grabski, S.Hanzlik, K.Ridgley, T.Sarkisian
*/

// Libs:
#include <LiquidCrystal.h>


// LCD interface pin out
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);


void setup() {
  lcd_Init();
  lcd_displayMessage();
  Serial.begin(9600);
}

void loop() {
  // when characters arrive over the serial port...
  if (Serial.available()) {
    // wait a bit for the entire message to arrive
    delay(100);
    // clear the screen
    lcd.clear();
    // read all the available characters
    while (Serial.available() > 0) {
      // display each character to the LCD
      lcd.write(Serial.read());
    }
  }
}







