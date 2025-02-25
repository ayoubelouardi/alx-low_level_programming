#include <stdio.h>
#include <stdint.h>
#include <limits.h>

uint64_t fibo(int n);

#define MAX_FIB 94

/**
 * main - prints the first MAX_FIB Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < MAX_FIB; i++)
	{
		printf("%ld", fibo(i));
		/*
		if (i != MAX_FIB)
		{
			printf(", ");
		}
		*/
	printf("\n");
	}

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
