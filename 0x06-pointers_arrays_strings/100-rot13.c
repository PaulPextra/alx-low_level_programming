#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */

char *rot13(char *str)
{
	int i, j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
				break;
			}
		}
	}

	return (str);
}
