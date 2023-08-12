
#include <Wire.h>

//Define Variables
int ledpin=13;
int x =0;

void setup(){
  
  Wire.begin(1);
  Wire.onReceive(receiveEvent); 
  // Make LED an output:
  pinMode(ledpin, OUTPUT);
}

void loop(){
  
  delay(100);
}

void receiveEvent(int howMany){
  
   //Reading the value into x 
   x = Wire.read();
  
   //Check condition
   if (x == 1){
     //LED on
     digitalWrite(ledpin,HIGH);
   }
  
  else{
    //LED off
    digitalWrite(ledpin,LOW);
  }
}




