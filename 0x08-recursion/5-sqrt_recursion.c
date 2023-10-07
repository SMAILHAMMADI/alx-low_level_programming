#include "main.h"

/**
 * calculate_sqrt - Helper functe the square root recursively.
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n if found, or -1tural square root.
 */
int calculate_sqrt(int n, int guess)
{
int new_guess;
new_guess = (n / guess + guess) / 2;
if (new_guess == guess)
return (-1);
if ((new_guess *new_guess) == n)
return (new_guess);
return (calculate_sqrt(n, new_guess));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The square root of n if found, or -1 if square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (calculate_sqrt(n, n / 2));
}
