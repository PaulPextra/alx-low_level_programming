#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: The array of integers
 * @n: the number of elements of the array to be printed
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
