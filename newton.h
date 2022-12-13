#ifndef NEWTON_H__
#define NEWTON_H__

/**
 * Absolute difference threshold to trigger stop of netwon's method iterations
 */
const float THRESHOLD = 0.0001;

/**
 * Max number of iterations to stop newton's method
 */
const int MAX_ITERS = 100;

/**
 * Newton-Raphson's method on a quadratic equation
 * Prints root found near guess or not found if max iterations reached
 *
 * @param guess - Starting point guess for a root
 * @param a - quadratic coefficient a
 * @param b - quadratic coefficient b
 * @param c - quadratic coefficient c
 */
void newtonRaphsonQuad(double guess, double a, double b, double c);

/**
 *
 * @param root - Root to print
 * @param iters - Number of iterations
 */
void printHelper(double root, int iters);

#endif
