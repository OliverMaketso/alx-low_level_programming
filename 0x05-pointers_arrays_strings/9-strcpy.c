#include "main.h"
/**
 * _strcpy - Copies a string, including the null byte, from src to dest.
 *
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: A pointer to the destination buffer (dest).
 */
char *_strcpy(char *dest, char *src)
{
char *original_dest = dest;

while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}

*dest = '\0'; /* Copy the null byte*/

return (original_dest);
}

