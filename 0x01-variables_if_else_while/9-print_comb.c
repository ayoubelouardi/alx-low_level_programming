#include <stdio.h>

/**
 * main - To print all possible combinations of single-digit numbers separated
 * by commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
		if (i + 48 != '9')
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);

	return (0);
}
