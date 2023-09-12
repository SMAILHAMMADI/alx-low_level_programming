#include <stdio.h>
#include "main.h"

/**
 * affichage - Displays a string followed by a newline
 * @t: The string to be displayed
 *
 * Description: This function takes a string as input and displays
 *              it character by character, followed by a newline.
 * Return: None
 */

void affichage(char t[])
{
int i = 0;
for (i = 0; t[i] != '\0'; i++)
{
putchar(t[i]);
}
putchar('\n');
}
int main(void)
{
char a[] = "_putchar";
affichage(a);
return (0);
}
