#include <stdio.h>
#include <stdlib.h>

/*
 * fibo: Entry points
 * @n: asdf
 * return: 0 if everything good
 */
uint64_t (int n)
{
	int a = 0, b = 1, c, i;
	if (n == 0)
		return (a);
	for (i = 2; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return (b);
}

/*
 * main: Entry points
 * return: 0 if everything good
 */

int main(void)
{
	int i = 0;
	for (i = 1; i <= 50; i++)
	{
		printf("%d, ", fibo(i));
	}
	return (0);
}
