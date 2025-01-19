#include <stdio.h>

/**
 * main - To print all numbers of base 16 (hexadecimal) in lowercase using the
 * putchar function with restrictions.
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
	for (i = 0; i < 6; i++)
	{
		putchar(i + 97);
	}
	putchar(10);

	return (0);
}
