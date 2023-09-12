#include <stdio.h>

/**
 * print_alphabet - Displays the lowercase alphabet followed by a newline
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
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet();
return (0);
}
