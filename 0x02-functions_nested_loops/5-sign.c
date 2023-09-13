#include "main.h"
#include <stdio.h>

/**
 * print_sign - Prints the sign of a number.
 *
 * @n: The number to be checked.
 *
 * Return:
 * 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
char sign;

if (n > 0)
{
sign = '+';
}
else if (n == 0)
{
sign = '0';
}
else
{
sign = '-';
}

return (putchar(sign));
}
