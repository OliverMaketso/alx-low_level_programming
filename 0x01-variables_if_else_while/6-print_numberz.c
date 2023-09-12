ii#include <stdio.h>

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
i++; /*increment i by 1*/
}
putchar('\n');
>>>>>>> d1a9e9953a5e0b7390864ff4e355786aa379b253
return (0);
}
