#include <stdio.h>

/**
 * main - Entry point
 * @parameterx: Description of parameter x
 * Description: Longer description of the function)?
 * Return: 0 if success
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

