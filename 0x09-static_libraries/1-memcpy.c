#include "main.h"

/**
 * _memcpy - Copies @n bytes from memory area @src to memory area @dest.
 * @src: The source buffer to copy character from.
 * @dest: A pointer to the memory area to copy @src into.
 * @n: The number of bytes to copy from @src.
 *
 * Return: The pointer @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
