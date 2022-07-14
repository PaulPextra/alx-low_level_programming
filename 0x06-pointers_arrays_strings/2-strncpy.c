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
	strncpy(dest, src, n);

	return (dest);
}
