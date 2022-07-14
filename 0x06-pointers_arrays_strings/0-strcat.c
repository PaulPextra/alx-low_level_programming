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
	strcat(dest, src);

	return (dest);
}
