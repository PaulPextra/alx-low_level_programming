#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @n: parameter of type int
 *
 * Return: Absolute value of a number
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (n * -1);
}
