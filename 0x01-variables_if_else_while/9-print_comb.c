#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of single-digit
 *              numbers in ascending order, separated by ", ".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

/* Print single-digit numbers separated by ", " */
for (num = 0; num <= 9; num++)
{
putchar(num + '0');

if (num < 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n'); /* Print a newline character */

return (0);
}

