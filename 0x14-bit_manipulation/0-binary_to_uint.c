#include "main.h"

/**
 * binary_to_uint - binary to int
 * @b: is pointing to a string of 0 and 1 chars.
 * Description:
 * function that converts a binary number to an unsigned int.
 * Return: the converted number.
 * or 0 if:
 *	there is one or more chars in the string b that is not 0 or 1
 *	b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	if (!(b == NULL))
	{
		char c;
		unsigned int i = 0, total = 0, size = 0;

		while (b[size] != '\0')
			size++;

		/* calculating the base 2 to base 10*/
		for (i = 0; b[i] != '\0'; i++)
		{
			c = b[size - i - 1];

			if (c == '1')
			{
				total += _pwr_of_two(i);
			}
			else if (c == '0')
			{
				continue;
			}
			else
			{
				return (0);
			}
		}
		return (total);
	}
	return (0);
}

/**
 * _pwr_of_two - return the resutl to 2^(x).
 * @n: is the power choosen for two.
 * Description: return the power for 2^(n).
 * Return: the result of 2^(n)
 * no error handling.
 */

unsigned int _pwr_of_two(unsigned int n)
{
	unsigned int t = 1;

	if (n == 0)
	{
		return (1);
	}
	else
	{
		while (n > 0)
		{
			t *= 2;
			n--;
		}
	}
	return (t);
}
