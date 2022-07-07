#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: n is the number of times the character _ should be printed
 *
 * Return: Nothiing
 */

void print_line(int n)
{
	int i;
	char l = '_';

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i <= n; i++)
			_putchar(l);
	}
}
