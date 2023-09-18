#include "main.h"
#include <stddef.h>
/**
 * rev_string - Reverses a string in place.
 *
 * @s: Pointer to a null-terminated string to be reversed.
 *
 * Description: This function takes a pointer to a null-terminated string as
 * a parameter and reverses the characters in the string in place.
 */
void rev_string(char *s)
{
int start = 0;
int length = 0;
int end = length - 1;
char temp;

if (s != NULL)
{
while (s[length] != '\0')
{
length++;
}

while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;

start++;
end--;
}
}
}

