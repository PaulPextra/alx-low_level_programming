#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: Pointer parameter to the destination string.
 * @src: Pointer parameter to the source string.
 * @n: represents a maximum number of characters to be appended.
 *
 * Return: pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
