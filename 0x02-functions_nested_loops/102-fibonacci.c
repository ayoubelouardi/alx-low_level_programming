#include"main.h"

/**
 * main - Entry point
 * Description: adsf
 * Return: Always 0 (Success)
*/

int main(void)
{
	int sum;
	unsigned long a = 0, b = 1, sum;

	for (sum = 0; sum < 50; ++sum)
	{
		sum = a + b;
		printf("%lu", sum);

		a = b;
		b = sum;

		if (sum == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
