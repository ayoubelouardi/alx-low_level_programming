#include <stdio.h>

/**
 * main - Entry point
 * Description: Longer description of the function)?
 * Return: 0 if success
 */

int main(void)
{
	int x, y;

	for (x = 0; x <= 98; x++)
	{
		for (y = 1; y <= 99; y++)
		{
			if (x >= y)
			{
				continue;
			}
			else
			{
				if (x < 10)
				{
					printf("0%d", x);
				}
				printf("%d", x);
				printf(" ");
				if (y < 10)
				{
					printf("0%d", y);
				}
				printf("%d", y);
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

