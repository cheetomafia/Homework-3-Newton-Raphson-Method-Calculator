#ifndef QUADRATIC_H__
#define QUADRATIC_H__


/**
 * Compute value of a quadratic
 *
 * @param x - input
 * @param a - coefficient a
 * @param b - coefficient b
 * @param c - coefficient c
 * @return y(x) = ax^2 + bx +c
 */
double quad(double x, double a, double b, double c);

/**
 * Compute value of a the derivative of a quadratic
 * @param x - input
 * @param a - coefficient a
 * @param b - coefficient b
 * @return y'(x) = 2ax + b
 */
double quadPrime(double x, double a, double b);

#endif
