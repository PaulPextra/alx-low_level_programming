#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: The string parameter
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
