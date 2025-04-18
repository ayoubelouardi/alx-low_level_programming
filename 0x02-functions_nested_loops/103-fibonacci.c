#include <stdio.h>
#include <stdint.h>

uint64_t fibo(int n);

/** main - write a program that finds and prints the sum of the even-valued
 * terms.
 *
 * Description: fibo Below 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	uint64_t sum = 0;

	while (fibo(i) < 4000000)
	{
		if (fibo(i) % 2 == 0)
			sum += fibo(i);
		i++;
	}

	printf("%ld\n", sum);

	return (0);
}

/**
 * fibo - return the nth fibonacci number.
 * @n: number
 *
 * Return: nth fibonacci number.
 * if @n < 0: -1
 */
uint64_t fibo(int n)
{
	int i;
	uint64_t a;
	uint64_t b;
	uint64_t temp;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	a = 0;
	b = 1;

	for (i = 2; i <= n; i++)
	{
		temp = a + b;
		a = b;
		b = temp;
	}

	return (b);
}
