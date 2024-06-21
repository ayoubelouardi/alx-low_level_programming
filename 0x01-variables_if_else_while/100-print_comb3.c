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

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			if (a != b && a < b)
			{
				putchar(a + 48);
				putchar(b + 48);

				if (a + b != 17)
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
