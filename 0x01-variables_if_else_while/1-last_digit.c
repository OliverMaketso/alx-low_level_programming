#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number, extracts  last digit
 * and prints whether it's greater than 5, equal to 0, or less than 6
 * but not 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;

/* Extract the last digit and ensure its sign matches the original number */
lastDigit = n % 10;
printf("Last digit of %d is %d", n, lastDigit);
if (lastDigit > 5)
{
printf(" and is greater than 5\n");
}
else if (lastDigit == 0)
{
printf(" and is 0\n");
}
else
{
printf(" and is less than 6 and not 0\n");
}
return (0);
}
