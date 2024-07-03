#include "main.h"

/**
 * print_array - print potion of str
 * @a: string
 * @n: bytes to write
 * Description: Longer description of the function)?
 */

void print_array(int *a, int n)
{
	int i = 0;
	char c;

	while (i <= n)
	{
		c = a[i];
		_putchar(c);
	}
	_putchar('\n');
}
