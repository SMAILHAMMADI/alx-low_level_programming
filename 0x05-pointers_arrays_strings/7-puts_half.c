#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
int length;
length = _strlen(str);
int i;
int start;
if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length - 1) / 2;
}
for (i = start; i < length; i++)
{
putchar(str[i]);
}
putchar('\n');
}
