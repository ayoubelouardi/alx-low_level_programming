#include"main.h"

/**
 * main - Entry point
 * Description: adsf
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long a = 0, b = 1, count;
	float total;

	while (1)
	{
		count = a + b;

		if (count > 4000000)
			break;

		if ((count % 2) == 0)
			total += count;

		a = b;
		b = count;
	}
	printf("%.0f\n", total);

	return (0);
}
