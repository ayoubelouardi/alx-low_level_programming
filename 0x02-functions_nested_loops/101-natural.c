#include <stdio.h>

/*
 * main: Entry points
 * Description: Longer description of the function)?
 * Return: 0 if everything good
 */

int main(void)
{
	int num = 0, count = 0;

	for (num = 0; num < 1024; ++num)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			count += num;
	}
	printf("%d\n", count);
	return (0);
}
