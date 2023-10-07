#include "main.h"

/**
 * is_divisible - Helper function to check if n isom 2 to sqrt(n).
 * @n: The number to check for divisibility.
 * @i: The current divisor to check.
 *
 * Return: 1 if n is divisible by any number from 2 to sqrt(n), otherwise 0.
 */
int is_divisible(int n, int i)
{
if (i <= 1)
return (0);
if (n % i == 0)
return (1);
return (is_divisible(n, i - 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to check.
 *
 * Return: 1 if n is a prime number, otherwise 0.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (!is_divisible(n, n / 2));
}
