#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to find the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
/* Base case: If the string is empty or reaches its end, return 0 */
if (*s == '\0')
{
return (0);
}

/* Recursively call with the next character and add 1 to the length */
return (1 + _strlen_recursion(s + 1));
}

