#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it with
 * a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific character to be initialized.
 *
 * Return: NULL if size = 0 or,
 * A pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
