#include <Wiichuck.h>
#include <Wire.h>

Wiichuck wii;

void setup() {
  Serial.begin(9600);
  wii.init();
  
  wii.calibrate();  // calibration
}

void loop() {
  if (wii.poll()) {
    Serial.print("joy:");
    Serial.print(wii.joyX());
    Serial.print(", ");
    Serial.print(wii.joyY());
    Serial.print("  \t");
    
    Serial.print("accle:");
    Serial.print(wii.accelX());
    Serial.print(", ");
    Serial.print(wii.accelY());
    Serial.print(", ");
    Serial.print(wii.accelZ());
    Serial.print("  \t");
    
    Serial.print("button:");
    Serial.print(wii.buttonC());
    Serial.print(", ");
    Serial.print(wii.buttonZ());
    Serial.println("");
  }
  
  delay(100);
}
