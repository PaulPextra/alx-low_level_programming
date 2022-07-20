#include "main.h"
int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number whose square root is returned.
 *
 * Return: The natural square root of the number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
 * _sqrt - Finds square root.
 * @prev: Previous value.
 * @root: Square root of the value.
 *
 * Return: The square root.
 */

int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}
