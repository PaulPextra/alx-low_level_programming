#include <stdio.h>

/**
 * main - Prints the name of the program.
 * @argc: The number of commandline arguments.
 * @argv: The array of string arguments of size @argc.
 *
 * Return: Always 0 on success.
 */

int main(int argc __attribute__((unused)), char* argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
