#include "main.h"

/**
 * positive_or_negative - positive of negative.
 *
 * @n: number
 *
 * Return: print the sign of @n.
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
