#include <stdio.h>
#include<string.h>

/**
 * main - check the code
 *
 * Return: Always
 */

char *cap_string(char *str)
{
int i;
int j;
char sep[] = " \t\n,;.!?\"(){}";
if (str[0] >= 'a' && str[0] <= 'z')
str[0] = str[0] - ('a' - 'A');
for ( j = 0 ; j < strlen(sep) ; j++)
{ 
for(i = 0 ; i < strlen(str)-1 ; i++)
{ 
if (str[i]==separator[j])
{ 
str[i+1] = str[i+1] - ('a' - 'A');
}
}
}
return (str);
}
