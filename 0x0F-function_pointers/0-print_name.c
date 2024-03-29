#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name.
 * @name: The name to print.
 * @f: A pointer function that points to the name.
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
