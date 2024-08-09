#include <stdio.h>
#include "main.h"

/**
 * print_binary - print the binary of a number.
 * @n: the number to print
 * Description:
 * function that prints the binary representation of a number.
 * Format: see example:
 *	You are not allowed to use arrays
 *	You are not allowed to use malloc
 *	You are not allowed to use the % or / operators
 */
void print_binary(unsigned long int n)
{
	int i, size = 0;

	if (n != 0)
	{
		/* find the biggest power of 2 that is less thn n */
		for (i = 0; n >= _pwr_of_two(i); i++)
			;

		for (size = i - 1; size >= 0; size--)
		{
			if (n >= _pwr_of_two(size))
			{
				_putchar('1');
				n = n - _pwr_of_two(size);
			}
			else
			{
				_putchar('0');
			}
		}
	}
	else
	{
		_putchar('0');
	}
}

/**
 * _pwr_of_two - return the resutl to 2^(x).
 * @n: is the power choosen for two.
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
