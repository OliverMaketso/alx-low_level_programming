#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @n: The integer for which the absolute value is to be computed.
 *
 * Return: The absolute value of n.
 */
int _abs(int n)
{
char digit;
int absValue = n;

if (n < 0)
{
_putchar('-');
absValue = -n;
}

while (absValue > 0)
{
digit = (absValue % 10) + '0';
_putchar(digit);
absValue /= 10;
}

return (n >= 0 ? n : -n);
}

