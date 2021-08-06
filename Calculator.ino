/*
  Author Pol Riera González https://github.com/DiPolRiera
  email: di.pol.riera@gmail.com
  
  Spain August'2021
*/

#include "Calculator.h"

Calculator device1; // Object with type Calculator  

void setup() {
  Serial.begin(9600);
  
  float Sum = device1.sum(2,3); 
  float Sub = device1.sub(23,3); 
  float Mult = device1.mult(5,3); 
  float Divi = device1.divi(9,3); 
  float Rest = device1.rest(25,4);

  Serial.println(Sum);
  Serial.printf("Sum value calculated: %f \n", Sum);
  
}
  

void loop(){
  
}
