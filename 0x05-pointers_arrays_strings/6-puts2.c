#include "main.h"
#include <stddef.h>

/**
 * puts2 - Prints every other character of a string, starting with the first character.
 *
 * @str: Pointer to a null-terminated string.
 *
 * Description: This function takes a pointer to a null-terminated string as
 * a parameter and prints every other character of the string, starting with
 * the first character, followed by a new line.
 */
void puts2(char *str)
{
int i = 0;

if (str != NULL)
{
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2; /* Increment by 2 to skip every other character*/
}

_putchar('\n'); /* Print a newline character*/
}
}


