#include "main.h"

/**
 **print_last_digit - last digit of number
 **@a: input.
 **
 **Return: last digit of number.
 **/
int print_last_digit(int a)
{
	int n;

	if (a >= 0)
	{
		n = a % 10;
	}
	else
	{
		n = (n % 10) * -1;
	}
	_putchar(n + '0');
	return (n);
}

