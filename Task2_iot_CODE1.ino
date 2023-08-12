
#include <Wire.h>

//Define Variables
int push_button = A0;
int x = 0;

void setup(){
  
  Wire.begin();
  // Make button an input:
  pinMode(push_button, INPUT);
  
}

void loop(){
  
  //Start Transmission to the second device 
  Wire.beginTransmission(1);
  
  // Read the button
  x = digitalRead(push_button);
  
  //Send data to second device
  Wire.write(x);
  
  //Ends Transmission
  Wire.endTransmission();
  delay(500);
}

