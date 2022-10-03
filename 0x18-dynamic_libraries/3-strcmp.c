#include "main.h"

/**
 * _strcmp - compares pointers to two strings.
 * @s1: Pointer to the first string to be compared.
 * @s2: Pointer to the second string to be compared.
 *
 * Return: Difference of the unmatched characters.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
