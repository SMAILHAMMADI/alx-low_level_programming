#include <stdio.h>
#include <string.h>
/**
 * main - Prints the number of command-line arguments (excluding program name).
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always 0.
 */
int main(char* argv[])
{
printf("%d\n", strlen(argv) - 1);
return (0);
}
