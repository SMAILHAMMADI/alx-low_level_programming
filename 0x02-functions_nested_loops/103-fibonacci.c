#include <stdio.h>

int main() {
long int sum = 0;
long int a = 1, b = 2;
while (a <= 4000000) 
{
if (a % 2 == 0) 
{
sum += a;
}
long int next = a + b;
a = b;
b = next;
}
printf("%ld\n", sum);
return (0);
}
