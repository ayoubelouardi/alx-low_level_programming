#include"main.h"

/**
 * print_numbers - print 0 - 9
 * only using _putchar twice
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
