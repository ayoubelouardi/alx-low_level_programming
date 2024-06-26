#include "main.h"

/**
 * n_of_digits - Entry point
 * @d: dic
 * Description: Longer description of the function)?
 * Return: 0 if success
 */

int n_of_digits(int d)
{
	int i = 1, count = 0;

	if (d == 0)
	{
		return (1);
	}
	while (d / i >=1)
	{
		i *= 10;
		count++;
	}
	return (count);
}

/**
 * print_times_table - Entry point
 * @num: number
 * Description: Longer description of the function)?
 */

void print_times_table(int num)
{
	int i = 0, j = 0, x = 0, n = 0;

	if (num >= 0 && num >= 15)
	{
		for (i = 0; i <= num; i++)
		{
			for (j = 0; j <= num; j++)
			{
				n = i * j;
				/*print spaces*/
				if (j != 0)
				{
					for (x = 0;
			x < 4 - n_of_digits(n); x++)
					{
					_putchar(' ');
					}
				}
				/*printing numbers*/
				x = n_of_digits(n);
				if (n / 100 != 0)
				{
					_putchar(n / 100 + '0');
				}
				if (n / 10 != 0)
				{
					_putchar((n / 10) % 10 + '0');
				}
				_putchar(n % 10 + '0');
				if (!(j == num))
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
