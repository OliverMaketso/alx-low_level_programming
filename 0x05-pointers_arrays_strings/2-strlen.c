#include "main.h"
#include <stddef.h>
/**
 * _strlen - Returns the length of a string.
 *
 * @s: Pointer to a null-terminated string.
 *
 * Description: This function takes a pointer to a null-terminated string as a
 * parameter and returns the length (number of characters) of the string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
int length = 0;

if (s != NULL)
{
while (*s != '\0')
{
length++;
s++;
}
}

return length;
}

