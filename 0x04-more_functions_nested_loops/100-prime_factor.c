#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */

int main(void)
{
	long num = 612852475143, div;

	while (div < (num / 2))
	{
		if ((num % 2) == 0)
		{
			num /= 2;
			continue;
		}
		for (div = 3; div < (num / 2); div += 2)
		{
			if ((num % div) == 0)
				num /= div;
		}
	}
	printf("%ld\n", num);

	return (0);
}
