#include "main.h"

/**
 * _pow_recursion - Returns the value of @x raised to the power of @y.
 * @x: The base parameter.
 * @y: The exponent parameter.
 *
 * Return: Returns the value of x raised to y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x *= _pow_recursion(x, y - 1));
}
