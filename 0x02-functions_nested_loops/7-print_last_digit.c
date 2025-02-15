#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @n: the number
 *
 * Return:
 * the value of the last digit
 */

int print_last_digit(int n)
{
	n = n % 10;
	n = ((n < 0) ? -n : n);
	_putchar('0' + n);

	return (n);
}
