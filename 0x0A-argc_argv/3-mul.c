#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: The number of arguments.
 * @argv: An array of string arguments of size @argc.
 *
 * Return: Always 0 on success.
 */

int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		sum *= atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
