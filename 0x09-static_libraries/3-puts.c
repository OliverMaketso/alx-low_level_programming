#include "main.h"
#include <stddef.h>
#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character to print.
 *
 * Return: The number of characters written.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

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

void _puts(char *s)
{
if (s != NULL)
{
while (*s != '\0')
{
_putchar(*s);
s++;
}
_putchar('\n');
}
}

