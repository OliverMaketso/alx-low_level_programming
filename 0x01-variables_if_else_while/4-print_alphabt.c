#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet in lowercase,
 *              excluding the letters 'q' and 'e', followed by a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}
putchar('\n'); /* Print a newline character */

return (0);
}

