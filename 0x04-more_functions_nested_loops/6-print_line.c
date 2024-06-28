#include"main.h"

/**
 * print_line - print a straight line
 * @n: is the number of times the _ character
 * should be printed
*/

void print_line(int n)
{
	int i = 0;

	if (!(n < 1))
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
