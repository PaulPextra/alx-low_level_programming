#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string which is a duplicate
 * of the string str.
 * @str: The to be copied.
 *
 * Return: NULL if str = NULL,
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[len] = '\0';

	return (duplicate);
}
