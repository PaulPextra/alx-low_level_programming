#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: Parameter of type int
 *
 * Return: 1, otherwise 0
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		_putchar('+');
		value = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		value = 0;
	}
	else
	{
		_putchar('-');
		value = -1;
	}
	return (value);
}
