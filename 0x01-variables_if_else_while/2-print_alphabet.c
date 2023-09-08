#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet in lowercase, followed by a
 * newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}

putchar('\n'); // Print a newline character

return (0);
}

