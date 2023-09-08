#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the single-digit number 0 in base 10,
 *              followed by a new line, using the putchar function twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
while (i < 10)
{
putchar(i + '0');    /* Print the character '0' */
putchar('\n');   /* Print a newline character */
i++; 
}
return (0);
}
