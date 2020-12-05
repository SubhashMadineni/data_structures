#include <LiquidCrystal.h>										 // add library of LCD
LiquidCrystal lcd(P2_0, P2_3, P2_4, P2_5, P2_6, P2_7);			 // connect LCD pins with TI launchPad
const int FIRESENSOR_Pin=P1_3; 									// connect fire sensor with P1_3 pin of TI board 
int FIRESENSOR_Pin_STATE; 										// assume state
int TEMP_PIN=P1_0;												 // connect temperature sensor with P1_0 pin as analog sensor
void setup() 
{
pinMode(FIRESENSOR_Pin, INPUT_PULLDOWN); 						// fire sensor pin as input to sensor active low signal 
lcd.begin(20, 4); 													// initialize LCD 
lcd.print(“fire detection sys”);								// print string on LCD
}
void loop()
{ 
FIRESENSOR_Pin_STATE = digitalRead(FIRESENSOR_Pin);				// Read Fire Sensor pin 
int TEMP_LEVEL=analogRead(TEMP_PIN);							 // read temperature sensor 
int TEMP=TEMP_LEVEL/2; 											// convert ADC level to equivalent temperature 
if (FIRESENSOR_Pin_STATE == HIGH) 								// check state of fire sensor 
{ 
FIRE=50; 														// assume value of fire sensor on true case is 50 
lcd.setCursor(0, 1);											 // set cursor on LCD 
lcd.print(“FIRE DETECTED..... “);								 // print string on LCD 
lcd.setCursor(0,2); 												// set cursor on LCD 
lcd.print(“TEMP:”); 											// print string on LCD 
lcd.print(TEMP); 												// print value of temperature
Serial.print(‘\r’);												 // print serial the char ‘\r’ 
Serial.print(FIRE);											 // send serial the value of FIRE sensor state 
Serial.print(‘|’); 											// print serial as string 
Serial.print(TEMP);											 // print serial the value of temperature 
Serial.print(‘\n’); 											// print serial the char ‘\n’ 
delay(20);														 // wait for 20 mSec 
} 
else 
{ 
FIRE=60; 													// assume value of fire sensor on true case is 60 
lcd.setCursor(0, 1);									 // set cursor on LCD 
lcd.print(“FIRE NOT DETECTED.. “); 
lcd.setCursor(0,2);										 // set cursor on LCD 
lcd.print(“TEMP:”); 									// print string on LCD 
lcd.print(TEMP); 										// print value of temperature 
Serial.print(‘\r’); 										// print serial the char ‘\r’ 
Serial.print(FIRE); 										// send serial the value of FIRE sensor state 
Serial.print(‘|’); 											// print serial as string 
Serial.print(TEMP);											 // print serial the value of temperature 
Serial.print(‘\n’);											 // print serial the char ‘\n’ 
delay(20); 
}
}

