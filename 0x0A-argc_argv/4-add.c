#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers.
 * @argc: The number of arguments.
 * @argv: An array of string arguments of size @argc.
 *
 * Return: Always 0 on Succes.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	while (argc-- > 1)
	{
		for (i = 0; i < argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");

				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);

	return (0);
}
