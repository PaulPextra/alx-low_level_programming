#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings.
 * @dest: A pointer parameter to the destination string.
 * @src: A pointer parameter to the source string
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
