#include "main.h"

#include "main.h"

/**
 * _puts_recursion - Prints by a newline using recursion.
 * @s: A pointer to the string to be printed.
 *
 * Description: This function ch character of the string
 * pointed to by 's' untilhe null terminator ('\0'). After
 * printing all characters, it addracter ('\n') to the end
 * to terminate the line.
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
_putchar('\n');
_putchar(*s);
_puts_recursion(s + 1);
}
