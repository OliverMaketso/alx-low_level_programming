#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet in lowercase,
 *              followed by the alphabet in uppercase, and a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';
/* Print lowercase alphabet */
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}

/* Print uppercase alphabet */
while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}

putchar('\n'); /* Print a newline character */

return (0);
}

