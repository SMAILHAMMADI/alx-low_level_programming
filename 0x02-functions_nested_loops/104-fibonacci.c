#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
int long a = 1;
int long b = 2;
int long next;
int count = 0;
printf("%ld, %ld", a, b);
while (count < 93)
{
next = a + b;
printf(", %ld", next);
a = b;
b = next;
count++;
}
printf("\n");
return (0);
}
