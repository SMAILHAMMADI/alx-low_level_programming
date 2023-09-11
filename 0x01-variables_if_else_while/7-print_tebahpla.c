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
char letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return 0;
}
