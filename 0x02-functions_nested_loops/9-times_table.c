#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			prod = i * j;
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			else
			{
				if (prod < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + prod);
				}
				else
				{
					_putchar(' ');
					_putchar('0' + prod / 10);
					_putchar('0' + prod % 10);

				}
				if (j != 9)
					_putchar(',');
			}
		}
		_putchar('\n');
	}
}
