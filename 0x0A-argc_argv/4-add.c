#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Checks if a string represents a positive integer.
 * @str: The string to check.
 *
 * Return: 1 if the string is a positive integer, 0 otherwise.
 */
int is_positive_number(char *str)
{
if (*str == '\0')
return (0);

while (*str != '\0')
{
if (*str < '0' || *str > '9')
return (0);
str++;
}

return (1);
}

int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
if (is_positive_number(argv[i]))
{
int num = atoi(argv[i]);
sum += num;
}
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);
return (0);
}
