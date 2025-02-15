#include "main.h"

/**
 * print_alphabet_x10 - Print alpha 10x times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(i + 'a');
		}
		_putchar('\n');
	}
}
