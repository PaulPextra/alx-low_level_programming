#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to encode.
 *
 * Return: The resulting string.
 */

char *rot13(char *str)
{
	int i, j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\n'; i++)
	{
		for (j = 0; s1[j] != '\n'; j++)
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
