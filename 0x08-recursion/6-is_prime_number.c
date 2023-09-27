#include "main.h"

/* is_prime_number - Checks if a number is prime.
 * n: The number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
if (n <= 1)
{
return (0); /* 0 and 1 are not prime numbers */
}

if (divisor == 1)
{
return (1); /* If divisor reaches 1, n is prime */
}

if (n % divisor == 0)
{
return (0); /* n is divisible by divisor, not prime */
}

return is_prime_helper(n, divisor - 1); /* Check next divisor */
}

int is_prime_number(int n)
{
return is_prime_helper(n, n / 2); /* Start with the largest possible divisor */
}

