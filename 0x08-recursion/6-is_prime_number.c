#include "main.h"

/*
 * is_prime_number - Checks if a number is prime.
 * n: The number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
int i; /* Declare the loop counter here */

/* Check if n is less than or equal to 1 */
if (n <= 1)
{
return (0); /* 0 and 1 are not prime numbers */
}

/* Check if n is 2 or 3 */
if (n <= 3)
{
return (1); /* 2 and 3 are prime numbers */
}

/* Check if n is divisible by 2 or 3 */
if (n % 2 == 0 || n % 3 == 0)
{
return (0); /* Numbers divisible by 2 or 3 are not prime */
}

/* Check for divisibility by numbers in the form 6k ± 1 */
for (i = 5; i * i <= n; i += 6)
{
if (n % i == 0 || n % (i + 2) == 0)
{
return (0); /* Numbers divisible by i or i + 2 are not prime */
}
}

return (1); /* If no divisor found, n is prime */
}

