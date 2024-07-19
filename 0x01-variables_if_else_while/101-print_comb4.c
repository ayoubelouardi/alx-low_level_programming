#include <stdio.h>

/**
 * main - Entry point
 * @parameterx: Description of parameter x
 * Description: Longer description of the function)?
 * Return: 0 if success
 */

int main(void)
{
	int x, y, z;

	for (x = 0; x <= 7; x++)
	{
		for (y = 1; y <= 8; y++)
		{
			for (z = 2; z <= 9; z++)
			{
				if (x >= y || y >= z)
				{
					continue;
				}
				else
				{
					printf("%d%d%d", x, y, z);
					if (x == 7 && y == 8 && z == 9)
						continue;
					else
						printf(", ");
				}
			}
		}
	}
	puts("");

	return (0);
}
