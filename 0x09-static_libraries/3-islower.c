#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: Parameter of type int
 *
 * Return: 1, otherwise 0
 */
int _islower(int c)
{
	char i;
	int retval = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			retval = 1;
		}
	}
	return (retval);
}
