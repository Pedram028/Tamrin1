#include <Arduino.h>
int led_pin = 13;
int push_button = 2;
int push_button1 = 3;
int state = 0;

void setup() {

pinMode(led_pin,OUTPUT);
pinMode(push_button,INPUT);
pinMode(push_button1,INPUT);

}
void loop() {

 if(digitalRead(push_button)== HIGH){
 if(digitalRead(led_pin)== HIGH){
  digitalWrite(led_pin, LOW);
 }
  else {
      digitalWrite(led_pin, HIGH);
  }
   delay(300);
  }

 if(digitalRead(push_button1)== LOW){
 if(digitalRead(led_pin)== LOW){
  digitalWrite(led_pin, HIGH);
 }
  else {
      digitalWrite(led_pin, LOW);
  }
   delay(300);
  }
 }