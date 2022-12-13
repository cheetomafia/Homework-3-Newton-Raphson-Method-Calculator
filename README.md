# Homework-3-Newton-Raphson-Method-Calculator
Homework 3
===
In this Homework you will implement the Newton-Raphson method of finding roots of equations. This homework will only use quadratic equations.

You may find more information (https://en.wikipedia.org/wiki/Newton%27s_method).

Newton's method
==

The algorithm is an iterative process that produces better approximations of an equation's root each iteration.

The initial approximation of the root is calculated based on an initial guess (x0), evaulation of the equation f(x0) and its derivative f'(x0)

x1 = x0 - f(x0) / f'(x0)

This equation is repeated n times or until difference in xn+1 and xn are very small.
xn+1 = xn - f(xn) / f'(xn)

Tasks
===
* Implement functions quad and quadPrime in quadratic.cpp. Functions are defined in quadratic.h
* Implement newtonRaphsonQuad in netwon.cpp. 
* Use quad and quadPrime functions to estimate roots.
* Use THRESHOLD variable to know when to terminate algorithm.
* Use MAX_ITERS to detect a quadratic that does not have a root.
* Use other provided code to finish assignment

Program Input
===
* 3 coefficients are input to stdin (a, b, c) which represent the 3 coffiecents of a quadratic equation.
* Another value is input for the initial root guess

Example Input
===
3
-11
1
0.1

Quadratic: 3x^2 -11x + 1
Initial Root Guess: 0.1

Fixing CLion Run Terminal Output
===
If you are seeing weird spacing and random output return lines. Try this to fix the output of run terminal in CLion
1. Help Menu
2. Find Action
3. Search for registry
4. Select registry
5. Uncheck run.process.with.pty
