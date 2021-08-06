/*
  @ file Calculator.h 
  
  Author Pol Riera González https://github.com/DiPolRiera
  email: di.pol.riera@gmail.com
  
  Spain August'2021

*/
#ifndef Calculator_h
#define Calculator_h

class Calculator {  
  public:
   float sum(float sum1, float sum2);
   float sub(float sub1, float sub2);
   float mult(float mult1, float mult2);
   float divi(float divi1, float divi2);
   float rest(float rest1, float rest2);
   float Rslt;
     
  private:
   int _pin;
};
#endif
