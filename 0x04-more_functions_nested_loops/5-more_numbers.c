#include"main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 * can only use _putchar three times
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		k = 0;
		for (j = 0; j < 15; j++)
		{
			_putchar(((j < 10) ? j : 1) + '0');
			if (j > 9)
			{
				_putchar(k + '0');
				k++;
			}
		}
		_putchar('\n');
	}
}
