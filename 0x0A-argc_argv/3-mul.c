#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
int num1, num2, result;

if (argc != 3)
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]); /* Convert the first argument to an integer*/
num2 = atoi(argv[2]); /* Convert the second argument to an integer*/

result = num1 *num2;

printf("%d\n", result);

return (0);
}

