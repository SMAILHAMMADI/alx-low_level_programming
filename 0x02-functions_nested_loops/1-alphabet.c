#include <stdio.h>
#include <main.h>

/**
 * print_alphabet - Displays a string followed by a newline
 *
 * Description: This function takes a string as input and displays
 *              it character by character, followed by a newline.
 * Return: None
 */

void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
print_alphabet();
return (0);
}
