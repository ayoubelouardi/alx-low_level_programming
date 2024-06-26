#include"main.h"

/**
 * n_digits - asdf
 * @d: b
 * Return: d
*/

int n_digits(int d)
{
	int len = 0;

	if (!d)
		return (1);

	while (d)
	{
		d = d / 10;
		len += 1;
	}

	return (len);
}

/**
 * main - Entry point
 * Description: asdf
 * Return: Always 0 (Success)
*/

int main(void)
{
	int c, ini;
	unsigned long f1 = 1, f2 = 2,
	sum, mx = 100000000, f1o = 0,
	f2o = 0, sumo = 0;

	for (c = 1; c <= 98; ++c)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		ini = n_digits(mx) - 1 - n_digits(f1);

		while (f1o > 0 && ini > 0)
		{
			printf("%d", 0);
			--ini;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;

		if (c != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
