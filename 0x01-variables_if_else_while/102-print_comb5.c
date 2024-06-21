#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the value of n
 * Description: print if the number is greater than 0: is positive
 * if the number is 0: is zero
 * if the number is less than 0: is negative
 * Return: 0 if success
 */
int main(void)
{
	int a = 0, b;

	while (a <= 99)
	{
		b = a;
		while (b <= 99)
		{
			if (b != a)
			{
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				putchar(' ');
				putchar((b / 10) + 48);
				putchar((b % 10) + 48);

				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++b;
		}
		++a;
	}
	putchar('\n');
	return (0);
}
