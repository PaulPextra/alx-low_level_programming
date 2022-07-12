#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: Parameter of pointer type int.
 * @b: Parameter pf pointer type int.
 *
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
