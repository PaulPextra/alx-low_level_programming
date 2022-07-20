#include "main.h"
int is_divisible(int num, int div);

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to be checked.
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	else if (n >= 2 && n <= 3)
		return (1);
	else
		return (is_divisible(n, div));
}

/**
 * is_divisible - Check if a number is divisible.
 * @num: The number to be checked.
 * @div: The result of division.
 *
 * Return: 1 if num is divisible or 0 if num is indivisible.
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	else if (div == num / 2)
		return (1);
	else
		return (is_divisible(num, div + 1));
}
