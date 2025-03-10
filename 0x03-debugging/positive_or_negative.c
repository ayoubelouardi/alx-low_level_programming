#include "main.h"

/**
 * positive_or_negative - positive of negative.
 *
 * @i: number
 *
 * Return: print the sign of @i.
 */

void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
}
