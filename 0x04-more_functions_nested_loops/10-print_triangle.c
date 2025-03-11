#include "main.h"

/**
 * print_triangle - Print a triangle using the '#' character.
 *
 * @s: size of the triangle.
 */
void print_triangle(int s)
{
	int i, j, k;

	if (s <= 0)
		_putchar('\n');


	for (i = 1; i <= s; i++)
	{
		for (k = s - i; k > 0; k--)
			_putchar(' ');
		for (j = 0; j < i; j++)
			_putchar('#');
		_putchar('\n');
	}
}
