#include "main.h"

/**
 * main - Entry point
 * Description: Longer description of the function)?
 * Return: 0 if success
 */

int main(void)
{
	times_table();
	return 0;
}

int how_manny_digit(int num)
{
	int i = 1, count = 0;

	while (num / i >= 1)
	{
		i *= 10;
		count++;
	}
	return count;
}

void times_table(void)
{
	int i, j, num, x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			num = (i*j);
			/* spaces printing */
			if (j != 0)
			{
				x = how_manny_digit(num);
				while (3 - x)
				{
					_putchar(' ');
					x++;
				}
			}
			if (num < 10)
			{
				_putchar(num/10+'0');
				_putchar(num % 10+'0');
			}
			else 
			{
				_putchar(num+'0');
			}
				_putchar(',');
		}
		_putchar('\n');
	}
}
