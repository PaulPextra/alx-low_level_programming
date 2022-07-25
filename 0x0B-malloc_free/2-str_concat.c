#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The First string.
 * @s2: The secod string.
 *
 * Return: NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	concat_str = malloc(sizeof(char) * (i + j + 1));
	if (concat_str == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		concat_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		concat_str[j] = s1[j];
		i++, j++;
	}
	concat_str[i] = '\0';

	return (concat_str);
}
