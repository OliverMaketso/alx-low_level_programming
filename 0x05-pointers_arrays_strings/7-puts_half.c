#include <stddef.h>
#include "main.h"
/**
 * puts_half - Prints the second half of a string followed by a new line.
 *
 * @str: Pointer to a null-terminated string.
 *
 * Description: This function takes a pointer to a null-terminated string as
 * a parameter and prints second half of the string, followed by a new line.
 */

void puts_half(char *str)
{
if (str != NULL)
{
int length = 0;
int start_index;

/* Calculate the length of the string */
while (str[length] != '\0')
{
length++;
}

/* Calculate the starting index for the second half */
if (length % 2 == 0)
{
start_index = length / 2;
}
else
{
start_index = (length - 1) / 2;
}

/* Print the second half of the string */
while (str[start_index] != '\0')
{
_putchar(str[start_index]);
start_index++;
}

_putchar('\n'); /* Print a newline character*/
}
}

