#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - Checks if a string is a positive number
 * @str: The string to check
 *
 * Return: 1 if it's a positive number, 0 otherwise
 */
int is_positive_number(const char *str)
{
if (str == NULL || *str == '\0')
{
return (0);
}

while (*str)
{
if (!isdigit(*str))
{
return (0);
}
str++;
}

return (1);
}

/**
 * main - Adds positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
int i;

int sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
if (!is_positive_number(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);

return (0);
}

