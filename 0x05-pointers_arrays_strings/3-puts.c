#include "main.h"
#include <stddef.h>
/**
 * _puts - Prints a string followed by a new line to stdout.
 *
 * @str: Pointer to a null-terminated string to be printed.
 *
 * Description: This function takes a pointer to a null-terminated string as a
 * parameter and prints the string to the standard output (stdout) followed by
 * a new line character.
 */

void _puts(char *str)
{
if (str != NULL)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
}

