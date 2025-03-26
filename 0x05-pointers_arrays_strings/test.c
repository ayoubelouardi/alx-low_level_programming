#include <stdio.h>

int pow_f(int n, int x)
{
	int i, r = 0;

	for (i = 0; i < n; i++)
	{
		r *= x;
	}

	return (r);
}

int main(void)
{
	int i;
	
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", pow_f(i, 10));
	}


	return (0);
}
