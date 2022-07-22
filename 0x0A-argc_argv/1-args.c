#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: The number of arguments.
 * @argv: An array of string arguments of size @argc.
 *
 * Return: Always 0 on success.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
