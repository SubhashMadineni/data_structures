#include <LiquidCrystal.h> // add LCD library
LiquidCrystal lcd(P1_0, P1_1, P1_2, P1_3, P1_4, P1_5); // pins to connect TI board
const int DC_Motor_PIN1=14; //P1.6 as constant int
const int DC_Motor_PIN2=15; //P1.7 as constant int
const int DC_Motor_PIN3=11; //P2.4 as constant int
const int DC_Motor_PIN4=12; //P2.5 as constant int
void setup() 
{ 
pinMode(DC_Motor_PIN1, OUTPUT); 			// assign pin1 of motor as output 
pinMode(DC_Motor_PIN2, OUTPUT); 			// assign pin1 of motor as output 
pinMode(DC_Motor_PIN3, OUTPUT); 			// assign pin1 of motor as output 
pinMode(DC_Motor_PIN4, OUTPUT); 			// assign pin1 of motor as output
lcd.begin(20, 4); 							// initilise LCd 
lcd.print(“DC Motor Control...”); 			// print string on LCD
}
void loop()
{ 
digitalWrite(DC_Motor_PIN1,HIGH); 			// make motor pin1 HIGH 
digitalWrite(DC_Motor_PIN2,LOW); 			// make motor pin2 LOW 
digitalWrite(DC_Motor_PIN3,HIGH); 			// make motor pin3 HIGH 
digitalWrite(DC_Motor_PIN4,LOW); 			// make motor pin4 LOW 
lcd.setCursor(0, 2); 						// set cursor on LCD 
lcd.print(“CLOCKWISE “); 					// print string on LCD 
delay(5000); 								// wait for 5000 mSec 
digitalWrite(DC_Motor_PIN1,LOW); 			// make motor pin1 LOW 
digitalWrite(DC_Motor_PIN2,HIGH); 			// make motor pin2 HIGH 
digitalWrite(DC_Motor_PIN3,LOW); 			// make motor pin3 LOW 
digitalWrite(DC_Motor_PIN4,HIGH); 			// make motor pin4 HIGH 
lcd.setCursor(0, 2); 						// set cursor on LCD 
lcd.print(“ANTI-CLOCKWISE “); 				// print string on LCD 
delay(5000); 								// wait for 5000 mSec 
digitalWrite(DC_Motor_PIN1,HIGH); 			// make motor pin1 HIGH 
digitalWrite(DC_Motor_PIN2,LOW); 			// make motor pin2 LOW 
digitalWrite(DC_Motor_PIN3,LOW); 			// make motor pin3 LOW 
digitalWrite(DC_Motor_PIN4,LOW);   			// make motor pin4 LOW 
lcd.setCursor(0, 2); 						// set cursor on LCD
lcd.print(“RIGHT “); 						// print string on LCD 
delay(5000); 								// wait for 5000 mSec 
digitalWrite(DC_Motor_PIN1,LOW); 			// make motor pin1 LOW 
digitalWrite(DC_Motor_PIN2,LOW); 			// make motor pin2 LOW 
digitalWrite(DC_Motor_PIN3,HIGH); 			// make motor pin3 HIGH 
digitalWrite(DC_Motor_PIN4,LOW); 			// make motor pin4 LOW 
lcd.setCursor(0, 2); 						// set cursor on LCD 
lcd.print(“LEFT “); 						// print string on LCD 
delay(5000); 								// wait for 5000 mSec }


