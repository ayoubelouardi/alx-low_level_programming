#include <stdio.h>
/**
 * positive_or_negative - print the value of n
 * @n: number
 * Description: print if the number is greater than 0: is positive
 * if the number is 0: is zero
 * if the number is less than 0: is negative
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
