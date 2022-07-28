#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int lens1 = 0, lens2 = 0, i;

	if (s1 == NULL)
		return ("");
	while (s1[lens1])
		lens1++;
	if (s2 == NULL)
		return ("");
	while (s2[lens2])
		lens2++;
	if (n >= lens2)
		n = lens2;
	concat = malloc(n + lens1 + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < (lens1 + n); i++)
	{
		if (i < lens1)
			concat[i] = *s1, s1++;
		else
			concat[i] = *s2, s2++;
	}
	concat[i] = '\0';

	return (concat);
}
