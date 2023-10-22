#include<stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
/***
 * main -- Entry point 
 * variables : int i1, i2 , i3 all of them equale 0.
 * for (i1 <= 9)
 * {
 *	for (i2 <= 9)
 *	{
 *		for (i3 <= 9)
 *		{
 *			if (i1 < i2 && i2 < i3)
 *			{
 *			putchar(i1);
 *			putchar(i2);
 *			putchar(i3);
 *			}
 *			else 
 *			{
 *				continue;
 *			}
 *			if ()
 *			{
 *			putchar(',');
 *			putchar(' ');
 *			}
 *		}
 *		i3 = 0;
 *	}
 *	i2 = 0;
 * }
 * return 0 (Success)
 ***/


int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!(i == 55 && j == 56 && k == 57))
					{
						putchar(',');
						putchar(' ');
					}
					else
					{
						continue;
					}
				}
			}
			k = 48;
		}
		j = 48;
	}
	putchar('\n');
	return (0);
}
