#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
int a = 1; 
int b = 2;
int next;
int count = 0;
printf("%d, %d", a, b);
while (count < 96)
{
next = a + b;
printf(", %d", next);
a = b;
b = next;
count++;
}
printf("\n");
return (0);
}
