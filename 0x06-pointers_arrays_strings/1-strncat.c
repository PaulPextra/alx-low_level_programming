#include "main.h"
#include <string.h>

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
	strncat(dest, src, n);

	return (dest);
}
