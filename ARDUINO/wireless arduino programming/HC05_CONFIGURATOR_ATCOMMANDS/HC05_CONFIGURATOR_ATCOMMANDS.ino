#include <SoftwareSerial.h>

SoftwareSerial BTSerial(10, 11);   // RX | TX

void setup() {
  pinMode(9, OUTPUT);    /* this pin will pull the HC-05 pin 34 (KEY pin) HIGH to switch module to AT mode */
  digitalWrite(9, HIGH); 
  
  Serial.begin(38400);
  Serial.println("Enter AT Commands:");
  BTSerial.begin(38400);  // HC-05 default speed in AT command mode
}

void loop() {

//The code below allows for commands and messages to be sent from COMPUTER (serial monitor) -> HC-05
  if (Serial.available())           // Keep reading from Arduino Serial Monitor 
    BTSerial.write(Serial.read());  // and send to HC-05

//The code below allows for commands and messages to be sent from HC-05 -> COMPUTER (serial monitor)    
  if (BTSerial.available())         // Keep reading from HC-05 and send to Arduino 
    Serial.write(BTSerial.read());  // Serial Monitor
}
