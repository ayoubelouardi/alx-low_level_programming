#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new
 * line.
 *
 * @n: number.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		do {
			print_number(n);
			n++;
		} while (n <= 98);
	}
	else
	{
		do {
			print_number(n);
			n--;
		} while (n >= 98);
	}
	_putchar('\n');
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
 * len_of_number - return the len of numbers.
 * @n: number
 * Return: The number of digits in a @n.
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
 * print_pnumber - print a positive number.
 * @n: positive number
 */
void print_pnumber(int n)
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

/**
 * print_number - print a number using _putchar function - digit by digit -.
 *
 * @n: the number to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_pnumber(-n);
		goto print_last;
	}
	else
	{
		print_pnumber(n);
		goto print_last;
	}

print_last:
	if (n != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
}

