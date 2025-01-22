#include <stdio.h>

/**
 * main - To print all possible unique combinations of three digits in
 * ascending order, separated by commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, a, b, c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j + i < 10; j++)
		{
			for (k = 0; k + i < 10; k++)
			{
				a = i;
				b = j + i;
				c = k + i;

				/* should not be the same */
				if (a != b && b != c && c != a)
				{
					putchar(a + 48);
					putchar(b + 48);
					putchar(c + 48);

					if ((a == 7 && b == 8 && c == 9))
					{
						break;
					}

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
