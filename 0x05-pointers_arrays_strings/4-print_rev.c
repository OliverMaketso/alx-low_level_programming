#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse followed by a new line.
 *
 * @s: Pointer to a null-terminated string to be printed in reverse.
 *
 * Description: This function takes a pointer to a null-terminated string as
 * a parameter and prints the characters of the string in reverse order,
 * followed by a new line.
 */
void print_rev(char *s)
{
int i;
int length = 0;

if (s != NULL)
{
while (s[length] != '\0')
{
length++;
}
for (i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
}






