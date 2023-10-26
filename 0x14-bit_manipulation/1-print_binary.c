#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The unsigned long integer to be printed in binary.
 */
void print_binary(unsigned long int n)
{
int bit;
int shift = (sizeof(unsigned long int) * 8) - 1;
int leading_zeros = 1;

if (n == 0)
{
_putchar('0');
return;
}

while (shift >= 0)
{
bit = (n >> shift) & 1;
if (bit == 1)
{
leading_zeros = 0;
_putchar('1');
}
else if (leading_zeros == 0)
{
_putchar('0');
}
shift--;
}
}

