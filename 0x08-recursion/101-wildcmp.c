#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if they can dentical.
 * @s1: The first string to compare.
 * @s2: The second string to compare, which can contain the sparacter '*'.
 *
 * Return: 1 if the strings are identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '\0')
return (1);
return ((wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)));
}
if (*s1 == *s2 || (*s1 != '\0' && *s2 == '?'))
return (wildcmp(s1 + 1, s2 + 1));
return (0);
}
