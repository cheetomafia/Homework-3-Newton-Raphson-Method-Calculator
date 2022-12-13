#include <iostream>
#include <math.h>



double quad(double x, double a, double b, double c){
  return ((a*pow(x,2)+b*x+c));
}

double quadPrime(double x, double a, double b){
  return ((2*a*x)+b);
}
