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
}

void loop() {

}







