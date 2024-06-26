#include "main.h"

/**
 * main - Entry point
 * Description: Longer description of the function)?
 * Return: 0 if success
 */

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

/**
 * print_last_digit - Entry point
 * @n: ads
 * Description: Longer description of the function)?
 * Return: 0 if success
 */
int print_last_digit(int n)
{
	int c = (n > 0) ? n % 10 : (n % 10) * -1;

	_putchar(c + '0');
	return (c);
}
