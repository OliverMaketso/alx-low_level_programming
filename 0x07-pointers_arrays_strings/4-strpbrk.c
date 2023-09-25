#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to search for.
 *
 * Return: A pointer to the byte in `s` that matches one of the bytes in `accept`,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
char *accept_ptr;

while (*s) {
accept_ptr = accept;
while (*accept_ptr) {
if (*s == *accept_ptr)
return s;
accept_ptr++;
}
s++;
}

return NULL;
}
