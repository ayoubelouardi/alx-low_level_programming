#include"main.h"

/**
 * main - print numbers 1 - 100 followed by a new line
 * numbers that are multiples of 3 print Fizz
 * numbers that are multiples of 5 print Buzz
 * numbers that are multiples of 3 n 5 print FizzBuzz
 * each number and word to be separated by space
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3) && !(i % 5))
		{
			printf("FizzBuzz");
		}
		else if (!(i % 3))
		{
			printf("Fizz");
		}
		else if (!(i % 5))
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
