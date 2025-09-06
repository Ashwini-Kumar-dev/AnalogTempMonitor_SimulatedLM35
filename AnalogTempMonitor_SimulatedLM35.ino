#include <LiquidCrystal.h>  
// Include the LiquidCrystal library

LiquidCrystal lcd(11, 10, 5, 4, 3, 2);  
// Define LCD pin connections: RS, E, D4–D7

const int potPin = A1;  
// Use A1 for potentiometer input (A0 is used by LCDShield buttons)

void setup() {
  lcd.begin(16, 2);  
  // Initialize the LCD with 16 columns and 2 rows
}

void loop() {
  int sensorValue = analogRead(potPin);  
  // Read analog value from potentiometer

  float temperature = sensorValue * 0.488;  
  // Convert ADC value to temperature in °C

  lcd.clear();  
  lcd.setCursor(0, 0);  
  lcd.print("Temp:");  
  lcd.setCursor(0, 1);  
  lcd.print(temperature);  
  lcd.print(" C");  

  delay(1000);  
  // Wait 1 second before next update
} 
