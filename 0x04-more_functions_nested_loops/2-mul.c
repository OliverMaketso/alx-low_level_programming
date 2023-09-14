#include "main.h"

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of a and b.
 */
int mul(int a, int b)
{
if (a == 0 || b == 0)
{
return 0; /* Product of zero and any number is zero */
}
else
{
return a * b;
}
}

