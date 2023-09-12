#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, returns the character written as an unsigned char cast
 * to an int (typically 0 to 255). On failure, returns -1.
 */
int _putchar(char c)
{
return write(1, &c, 1);
}

/**
 * main - Entry point of the program
 *
 * Description: This program prints "_putchar" followed by a new line
 * using the custom _putchar function.
 *
 * Return: Always returns 0 to indicate success.
 */
int main(void)
{
_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');

return (0);
}
