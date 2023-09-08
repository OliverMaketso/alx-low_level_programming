#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all the numbers of base 16 in lowercase,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char hex_digit;

/* Print hexadecimal digits '0' to '9' */
for (hex_digit = '0'; hex_digit <= '9'; hex_digit++)
{
putchar(hex_digit);
}

/* Print hexadecimal digits 'a' to 'f' */
for (hex_digit = 'a'; hex_digit <= 'f'; hex_digit++)
{
putchar(hex_digit);
}

putchar('\n'); /* Print a newline character */

return (0);
}

