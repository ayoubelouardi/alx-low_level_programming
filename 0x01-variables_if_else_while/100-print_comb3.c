#include <stdio.h>

/**
 * main - print a beautiful design
 * Description:
 * Write a program that prints all possible different
 * combinations of two digits.
 * Return: 0 Always.
 */

int main(void)
{
	int x, y;

	for (x = 0; x <= 8; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			if (x >= y)
			{
				continue;
			}
			else
			{
				printf("%d%d", x, y);
				if (x == 8 && y == 9)
					continue;
				else
					printf(", ");
			}
		}
	}
	puts("");

	return (0);
}

