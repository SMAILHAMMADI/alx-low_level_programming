#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Generate a random number, determine its last digit,
 *              and print a message based on the last digit.
 *
 * Return: Always 0 (Success)
 */

void affichage(char t[]) {
for (int i = 0; t[i] != '\0'; i++) 
{
putchar(t[i]);
}
putchar('\n');
}
int main(void) {
char a[] = "_putchar";
affichage(a);
return (0);
}
