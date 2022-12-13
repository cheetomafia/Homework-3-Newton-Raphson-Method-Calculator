#include <iostream>
#include <math.h>

#include "newton.h"
#include "quadratic.h"

using namespace std;

 

void newtonRaphsonQuad(double guess, double a, double b, double c)
{
  int iters = 0;
  //IMPLEMENT
  double z = quad(guess, a,b,c)/quadPrime(guess, a, b);
  double guess_check = guess;
  guess = guess - z;
  iters++;
  while(abs(guess - guess_check) >= THRESHOLD && iters < MAX_ITERS){
    guess_check = guess;
    z = quad(guess, a, b, c)/quadPrime(guess, a, b);
    guess = guess - z;
    iters++;
  }
  // Print out the result
  printHelper(guess, iters);
  }
  


void printHelper(double root, int iters)
{
    //cout.precision(4);

    if( iters < MAX_ITERS ) {
        cout << "Root Found: " << root << endl << "Iterations: " << iters << endl;
    }else {
        cout << "No root found. Max iterations reached ( " << iters << " )\n";
    }
}
