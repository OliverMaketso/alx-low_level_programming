#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
if (argc > 1)
printf("%d\n", argc - 1);
else
printf("0\n");

return (0);
}

