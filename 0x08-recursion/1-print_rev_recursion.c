#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
/* Base case: If the string is empty or reaches its end, return */
if (*s == '\0')
{
_putchar('\n'); /* Print a newline character to end the reversed string */
return;
}

_print_rev_recursion(s + 1); /* Recursively call with the next character */
_putchar(*s); /* Print the current character after the recursion unwinds */
}

