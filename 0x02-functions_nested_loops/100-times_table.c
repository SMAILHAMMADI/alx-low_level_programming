#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number for which to print the times table.
 */
void print_times_table(int n)
{
int i;
int j;
if (n < 0 || n > 15)
return;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int result = i * j;
if (j == 0)
printf("%d", result);
else
printf(",%4d", result);
}
printf("\n");
}
}
