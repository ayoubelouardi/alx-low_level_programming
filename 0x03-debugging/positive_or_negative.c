#include <stdio.h>

/**
 * positive_or_negative - Entry point
 * @i: number
 * Description: print value of n satus;
 * zero, positive or negative
 */

void positive_or_negative(int i)
{
	/* my if statement */
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
