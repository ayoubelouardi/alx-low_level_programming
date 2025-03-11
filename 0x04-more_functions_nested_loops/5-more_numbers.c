#include "main.h"

/**
 * more_numbers - Print 10 times the numbers from 0 to 14
 *
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
			_putchar('0' + i);

		for (i = 0; i < 5; i++)
		{
			_putchar('0' + 1);
			_putchar('0' + i);
		}
		_putchar('\n');
	}
}
