#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * positive_or_negative - check whether a number is positive or negative.
 * @i: parameter of type int
 *
 * Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
