#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: Parameter of type int
 *
 * Return: 1, otherwise 0
 */
int _isalpha(int c)
{
	char l, u;
	int isletter = 0;

	for (l = 'a'; l <= 'z'; l++)
	{
		for (u = 'A'; u <= 'Z'; u++)
		{
			if (c == l || c == u)
			{
				isletter = 1;
			}
		}
	}
	return (isletter);
}
