#include <stdio.h>

/**
 * main - To print all possible unique combinations of three digits in
 * ascending order, separated by commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j + i < 10; j++)
		{
			if (i != j + i)
			{
				putchar(i + 48);
				putchar(j + i + 48);
				if (!(i == 8 && j + i == 9))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
