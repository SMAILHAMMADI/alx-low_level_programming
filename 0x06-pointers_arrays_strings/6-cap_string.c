#include <stdio.h>

/**
 * is_separator - Checks if a character is a word separator
 * @c: The character to check
 *
 * Return: 1 if c is a separator, 0 otherwise
 */
int is_separator(char c)
{
int i;
char separators[] = " \t\n,;.!?\"(){}"; 
for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
{
return (1);
}
}
return (0);
}

/**
 * cap_string - Capitalizes all words in a string
 * @str: The input string
 *
 * Return: A pointer to the resulting string
 */
char *cap_string(char *str)
{
int i;
int capitalize = 1;
for (i = 0; str[i] != '\0'; i++)
{
if (is_separator(str[i]))
{
capitalize = 1;
}
else if ((str[i] >= 'a' && str[i] <= 'z') && capitalize)
{
str[i] = str[i] - ('a' - 'A');
capitalize = 0;
}
else
{
capitalize = 0;
}
}
