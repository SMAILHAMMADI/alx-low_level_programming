#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Generate a random number, determine its last digit,
 *              and print a message based on the last digit.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar(digit + '0');  // Convert the digit to its character representation
digit++;
}
putchar('\n');  // Print a newline character
return (0);
}
