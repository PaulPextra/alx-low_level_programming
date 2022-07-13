#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0.
 */

int main(void)
{
	char password[70];
	int i = 0, sum = 0, half1, half2;

	srand(time(0));

	while (sum < 2772)
	{
		password[i] = 33 + rand() % 70;
		sum += password[i++];
	}
	password[i] = '\0';
	if (sum != 2772)
	{
		half1 = (sum - 2772) / 2;
		half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			half1++;
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + half1))
			{
				password[i] -= half1;
				break;
			}
		}
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + half2))
			{
				password[i] -= half2;
				break;
			}
		}
	}
	printf("%s", password);

	return (0);
}
