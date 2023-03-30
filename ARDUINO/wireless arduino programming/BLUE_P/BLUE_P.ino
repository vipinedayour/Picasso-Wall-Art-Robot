#include <SoftwareSerial.h> 
SoftwareSerial BTSerial(10, 11); // RX | TX
void setup()
{
pinMode(9,OUTPUT);
digitalWrite(9,HIGH);
Serial.begin(9600);
Serial.println("Enter AT commands:");
BTSerial.begin(38400); // HC-05 default speed in AT command more
}
void loop()
{

  // Keep reading from HC-05 and send to Arduino Serial Monitor
  if (BTSerial.available())
    Serial.write(BTSerial.read());

  // Keep reading from Arduino Serial Monitor and send to HC-05
  if (Serial.available())
    BTSerial.write(Serial.read());
}
/*send following AT Commands one by one to the bluetooth module from serial monitor
 AT+ORGL
 AT+NAME= TYPE NAME WHICH YOU SET FOR YOUR BLUETOOTH MODULE OR IGNORE THIS COMMAND IF YOU WANT TO GO WITH DEFAULT NAME
 AT+ROLE=0
 AT+POLAR=1,0
 AT+UART=115200,0,0
 AT+INIT
 */ 
