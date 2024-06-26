#include "main.h"

/**
 * main - Entry point
 * Description: Longer description of the function)?
 * Return: 0 if success
 */

int main(void)
{
	times_table();
	return (0);
}

/**
 * times_table - Entry point
 * Description: Longer description of the function)?
 */
void times_table(void)
{
	int i, j, num, x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			num = i * j;
			/* spaces printing */
			if (j != 0)
			{
				x = (num < 10) ? 2 : 1;
				while (x)
				{
					_putchar(' ');
					x--;
				}
			}
			if (num < 10)
			{
				_putchar(num + '0');
			}
			else
			{
				if (num / 10 != 0)
				{
				_putchar(num / 10 + '0');
				}
				_putchar(num % 10 + '0');
			}
				_putchar(',');
		}
		_putchar('\n');
	}
}
