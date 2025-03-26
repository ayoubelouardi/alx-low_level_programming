#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string
 *
 * Return: Converted integer value
 */
int _atoi(char *s)
{
	int i = 0, j = 0, p = 0;
	long number = 0, n = 0;
	char c;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		c = *(s + i);

		if (c == '-')
		{
			p--;
		}
		else if (c == '+')
		{
			p++;
		}
		else if ('0' <= c && c >= '9')
		{
			/* calculate the number */
			for (j = 0; (*(s + i + j) >= '0' && *(s + i + j) <= 'z'); j++)
			{
				n = *(s + i + j) - '0';
				number = number * pow_f(j, 10) + n;
			}

			/* sign */
			if (p < 0)
				number = number * -1;

			return (number);
		}
	}

	return (0);
}

/**
 * pow_f - power function
 * Description: calculate the power of a number
 * @n: power sign.
 * @x: number.
 *
 * Return: result.
 */

long pow_f(int n, int x)
{
	int i, r = 1;

	for (i = 0; i < n; i++)
	{
		r *= x;
	}

	return (r);
}
