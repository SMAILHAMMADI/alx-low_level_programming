#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting.
 * @str: Pointer to the string.
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
putchar(str[i]);
i += 2;
}
putchar('\n');
}
