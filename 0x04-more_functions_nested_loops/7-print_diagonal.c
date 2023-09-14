#include "main.h"

/**
 * print_diagonal - Draws a diagonal line of backslashes.
 * @n: The number of times the character '\' should be printed.
 */
void print_diagonal(int n)
{
while (n > 0)
{
int spaces = n - 1;

while (spaces > 0)
{
_putchar(' ');
spaces--;
}

_putchar('\\');
_putchar('\n');
n--;
}

if (n <= 0)
_putchar('\n');
}

