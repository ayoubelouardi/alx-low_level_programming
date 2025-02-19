#include <stdio.h>
#include "../main.h"

void print_last(int n);
int pow_10(int i);
void print_pnumber(int n);
void print_number(int n);

int main(void)
{
	/* print the number */
	print_number(0);
	printf("| 0");
	puts("------------");

	print_number(98);
	printf("| 98");
	puts("------------");

	print_number(111);
	printf("| 111");
	puts("------------");

	print_number(81);
	printf("| 81");
	puts("------------");

	print_number(10);
	printf("| 10");
	puts("------------");

	print_number(-10);
	printf("| -10");
	puts("------------");

	return (0);

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


void print_last(int n)
{
	if (n != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
}

void print_pnumber(int n)
{
	int i, len;
	double digit;

	len = 1;
	digit = (double) n;

	/* find number len */
	while (digit / 10.00 >= 1.00)
	{
		len++;
		digit = digit / 10.00;
	}


	digit = n;
	for (i = len -1 ; i >= 0; i--)
	{
		digit = ((int) ((double) n / (double) pow_10(i)) % 10);
		_putchar('0' + digit);
	}
	/*
	print_last(n);
	*/
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
	}
	else
	{
		print_pnumber(n);
	}
}

