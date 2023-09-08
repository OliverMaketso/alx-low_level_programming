#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit numbers of base 10
 *              starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit = 0;

while (digit <= 9)
{
putchar(digit + '0'); /* Convert the integer to a character and print*/
digit++;
}

putchar('\n'); /* Print a newline character */

return (0);
}

