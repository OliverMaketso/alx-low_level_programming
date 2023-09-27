#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of n, or -1 if n is negative.
 */
int factorial(int n)
{
/* Check for the base case: factorial of 0 is 1 */
if (n == 0)
{
return (1);
}
/* Check for the error case: n is negative */
else if (n < 0)
{
return (-1);
}
/* Recursive case: Calculate factorial using recursion */
else
{
return (n * factorial(n - 1));
}
}

