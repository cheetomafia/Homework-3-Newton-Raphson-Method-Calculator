#include <iostream>
#include "newton.h"

using namespace  std;

int main()
{
    // Quadratic coefficients
    static double a, b, c;

    // Guess for the root
    double guess;

    // Outputs can be used during testing if you desire
    // Remove cout statements to pass tests
    
    //cout << "Enter quadratic coefficient a: ";
    cin >> a;
    //cout << "Enter quadratic coefficient b: ";
    cin >> b;
    //cout << "Enter quadratic coefficient c: ";
    cin >> c;
    //cout << "Enter guess for root: ";
    cin >> guess;

    newtonRaphsonQuad(guess, a, b, c);

    return 0;
}
