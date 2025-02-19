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


