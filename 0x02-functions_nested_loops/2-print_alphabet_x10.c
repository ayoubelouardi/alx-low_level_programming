#include "main.h"

/**
* print_alphabet_x10 - Entry point
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int x, i;

	for (i = 1; i <= 10; i++)
	{
		for (x = 97; x <= 122; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
