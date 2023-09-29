#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"
#include <stddef.h>

/**
 * main - Entry point
 *
 * Description: Prints the name of the program, including the path.
 * If you rename the program, it will print the new name without recompilation.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
int i = 0;

if (argc > 0 && argv[0] != NULL)
{
while (argv[0][i] != '\0')
{
_putchar(argv[0][i]);
i++;
}
_putchar('\n');
return (0);
}
else
{
return (1); /* Return an error code if argv[0] is not available */
}
}
