#include <LiquidCrystal.h>

const int photoresistorPin = A2;

const int rs = 8, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const float calibrationFactor = 0.55; 

void setup() {
  
  lcd.begin(16, 2);
  lcd.print("Svetilnost:");
}

void loop() {
  
  int sensorValue = analogRead(photoresistorPin);

  float lux = (1023 - sensorValue) * calibrationFactor; 

  lcd.setCursor(0, 1);
  lcd.print("Lux: ");
  lcd.print(lux);

  delay(500); 
}
