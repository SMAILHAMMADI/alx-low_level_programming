#include <stdio.h>
#include <string.h>
/**
 * main - Prints the number of command-line arguments (excluding program name).
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
