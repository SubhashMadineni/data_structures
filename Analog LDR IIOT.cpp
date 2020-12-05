#include <LiquidCrystal.h> 							    	// add library of LCD
LiquidCrystal lcd(P1_0, P1_1, P1_2, P1_3, P1_4, P1_5);	 // LCD connection with TI
const int LDRSensor_Pin=A7; 							// choose A7 analog pin
const int INDICATOR_PIN = GREEN_LED;					 // choose indicator
void setup() 
{ 
pinMode(INDICATOR_PIN, OUTPUT);							// assign indicator pin as output 
lcd.begin(20, 4); 										// initialize LCD 
lcd.print(“LDR LEVEL DET...”); 							// print stri ng on LCD
}
void loop()
{ int LDRSENSOR_Pin_LEVEL = digitalRead(LDRSensor_Pin);// Read LDR pin 
lcd.setCursor(0, 1); 
lcd.print(“ACTUAL_LEVEL:”); 							// print string on LCD 
lcd.setCursor(0, 2); 									// set cursor on LCD 
lcd.print(LDRSENSOR_Pin_LEVEL );						 // print level of ADC on LCD 
if (LDRSENSOR_Pin_LEVEL >= 512) 							// check condition 
{ 
lcd.setCursor(0, 3); 									// set cursor on LCD 
lcd.print(“LEVEL >= 512”); 								// print string on LCD 
digitalWrite(INDICATOR_PIN, HIGH); 						// make indicator pin HIGH 
delay(20); 												// wait for 20 mSec 
} 
else 
{ 
lcd.setCursor(0, 3);									 // set cursor on LCD 
lcd.print(“LEVEL <= 512”);								 // print string on LCD 
digitalWrite(INDICATOR_PIN, LOW);						 // make indicator pin LOW 
delay(20); 												// wait for 20 mSec 
}
}

