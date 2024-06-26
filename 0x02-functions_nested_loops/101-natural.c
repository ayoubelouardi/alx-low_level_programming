#include <stdio.h>

/*
 * main: Entry points
 * return: 0 if everything good
 */

int main(void)
{
	int i = 0, count = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			count+= i;
		}
		i++;
	}
	printf("%d\n", count);
	return (0);
}
