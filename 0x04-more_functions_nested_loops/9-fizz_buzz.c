#include <stdio.h>

/**
 * main - Fizz-Buzz test.
 *
 * Return: 0 always.
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	return (0);
}
