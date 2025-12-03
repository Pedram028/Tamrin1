#include <Arduino.h>
int led_pin = 13;
int push_button = 2;
int state = 0;

void setup() {

pinMode(led_pin,OUTPUT);
pinMode(push_button,INPUT);

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
}
 //new code