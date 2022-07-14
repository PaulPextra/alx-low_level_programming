#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string.
 * @dest: Pointer to the destination array where the content is to be copied.
 * @src: The string which will be copied.
 * @n: The first n character copied from src to dest.
 *
 * Return: A pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
