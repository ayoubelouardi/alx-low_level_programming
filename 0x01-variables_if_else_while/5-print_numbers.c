#include <stdio.h>

/**
 * main - prints all single digit numbers of
 * base 10 starting from 0, followed by a new line.
 * Return: 0 if success
 */
int main(void)
{
	char c = '0';

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
