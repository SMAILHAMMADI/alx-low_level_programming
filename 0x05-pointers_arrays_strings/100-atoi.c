#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string.
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1; // Default sign is positive
while (*s == ' ')
{
s++;
}
if (*s == '-')
{
sign = -1;
s++;
}
else if (*s == '+')
{
s++;
}
while (*s >= '0' && *s <= '9')
{
if (result > (2147483647 - (*s - '0')) / 10)
{
if (sign == 1)
return (2147483647);
else
return (-2147483648);
}
result = result * 10 + (*s - '0');
s++;
}
return (result * sign);
}
