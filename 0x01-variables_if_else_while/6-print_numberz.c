#include <stdio.h>

/**
 * main - To print all single-digit numbers (0-9) without using char variables
 * and with limited putchar calls.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
	}
	putchar(10);

	return (0);
}
