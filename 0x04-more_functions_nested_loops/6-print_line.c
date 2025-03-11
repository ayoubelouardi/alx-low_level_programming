#include "main.h"

/**
 * print_line - Draw a straight line in the terminal.
 *
 * @n: size of the staight line.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
