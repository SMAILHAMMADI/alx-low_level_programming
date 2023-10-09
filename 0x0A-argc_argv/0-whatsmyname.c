#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function is the entry point of the program. It prints the name
 * of the program, including the path, when executed.
 *
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 to indicate successful execution.
 */
int main(int argc, char *argv[])
{
if (argc >= 1)
printf("%s\n", argv[0]);
return (0);
}
