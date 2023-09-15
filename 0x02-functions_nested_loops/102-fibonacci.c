#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
int a = 1, b = 2, next;
printf("%d, %d", a, b);
for (i = 3; i <= 50; i++)
{
next = a + b;
printf(", %d", next);
a = b;
b = next;
}
printf("\n");
return (0);
}
