/*
  @ file Calculator.cpp 
  
  Author Pol Riera González https://github.com/DiPolRiera
  email: di.pol.riera@gmail.com
  
  Spain August'2021

*/

#include "Calculator.h"
// #include ".\folder\library.h"

float Calculator::sum(float sum1, float sum2)
{
  Rslt = sum1 + sum2;
  return Rslt;
 }

 float Calculator::sub(float sub1, float sub2)
{
  Rslt = sub1 - sub2;
  return Rslt;
 }

 float Calculator::mult(float mult1, float mult2)
{
  Rslt = mult1 * mult2;
  return Rslt;
 }

  float Calculator::divi(float divi1, float divi2)
{
  Rslt = divi1 / divi2;
  return Rslt;
 }

 float Calculator::rest(float rest1, float rest2)
{
  Rslt = rest1 % rest2;
  return Rslt;
 }

 
