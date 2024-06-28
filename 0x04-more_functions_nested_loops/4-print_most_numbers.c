#include"main.h"

/**
 * print_most_numbers - print 0 - 9 apart
 * from 2 and 4 and you can
 * only use _putchar twice
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		if ((n > 5) || (n % 2 != 0 || n == 0))
		{
			_putchar(n + '0');
		}
		n++;
	}
	_putchar('\n');
}
