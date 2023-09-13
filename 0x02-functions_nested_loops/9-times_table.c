#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
int row, column, product, tens, ones;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
product = row * column;

if (column > 0)
{
_putchar(',');
_putchar(' ');
            }

tens = product / 10;
ones = product % 10;

if (tens > 0)
{
 _putchar(tens + '0');
}
else
{
_putchar(' ');
}

_putchar(ones + '0');
}
_putchar('\n');
}
}

