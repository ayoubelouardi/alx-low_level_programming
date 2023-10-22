#include<stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int x, xx, y, yy;

	for (x = 48; x <= 57; x++)
	{
		for (xx = 48; xx <= 57; xx++)
		{
			for (y = 48; y <= 57; y++)
			{
				for (yy = 48; yy <= 57; yy++)
				{
					if (yy == 48 && y == 48)
					{
						continue;
					}
					if (x <= y && xx <= yy)
					{
					putchar(x);
					putchar(xx);
					putchar(' ');
					putchar(y);
					putchar(yy);
						if (!(x == 57 && xx == 56 && y == 57 && yy == 57))
						{
							putchar(',');
							putchar(' ');
						}
					}
					else 
					{
						continue;
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
