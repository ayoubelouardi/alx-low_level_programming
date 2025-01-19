#include <stdio.h>

/**
 * main - To print all single-digit numbers (0-9) using the putchar function
 * with restrictions.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
	}
	putchar(10);

	return (0);
}
