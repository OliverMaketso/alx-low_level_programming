#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The string containing characters to match.
 *
 * Return: The number of bytes in the initial segment of `s`
 *         consisting only of bytes from `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
char *s_ptr;
char *accept_ptr;
unsigned int count = 0;
int found = 0;

for (; *s; s++) {
found = 0;
for (s_ptr = s, accept_ptr = accept; *accept_ptr; accept_ptr++) {
if (*s_ptr == *accept_ptr) {
found = 1;
break;
}
}
if (found)
count++;
else
break;
}

return count;
}
