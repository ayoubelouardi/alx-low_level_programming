#include "main.h"

int pow_10(int i);
void print_last(int n, int x);
int len_of_number(int n);
void print_number(int n);

/**
 * print_times_table - Write a function that prints the n times table, starting
 * with 0.
 *
 * @n: number
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			print_last(i * j, j);
			print_number(i * j);
		}
		_putchar('\n');
	}
}

/**
 * pow_10 - return the power of 10.
 *
 * @i: power degree.
 *
 * Return:
 * 10^i
 */
int pow_10(int i)
{
	if (i == 0)
	{
		return (1);
	}
	else
	{
		return (pow_10(i - 1) * 10);
	}
}


/**
 * print_last - print the ', ' after the number
 * @n: number
 * @x: number that will not print at it
 */
void print_last(int n, int x)
{
	int len, i;

	len = len_of_number(n);

	if (x != 0)
	{
		_putchar(',');
		for (i = 0; i < 4 - len; i++)
		{
			_putchar(' ');
		}
	}
}

/**
 * len_of_number - return the len of a number.
 * @n: number
 * Return: return the length of a number.
 */
int len_of_number(int n)
{
	int len = 1, d;

	d = (double) n;
	while (d / 10.00 >= 1.00)
	{
		len++;
		d = d / 10.00;
	}

	return (len);
}

/**
 * print_number - print a number using _putchar function - digit by digit -.
 *
 * @n: the number to print
 */
void print_number(int n)
{
	int i, len;
	double digit;

	/* find number len */
	len = len_of_number((double) n);


	digit = n;
	for (i = len - 1 ; i >= 0; i--)
	{
		digit = ((int) ((double) n / (double) pow_10(i)) % 10);
		_putchar('0' + digit);
	}
}

