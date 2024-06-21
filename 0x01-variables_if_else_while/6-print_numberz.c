#include <stdio.h>

/**
 * main - prints all single digit numbers of
 * base 10 starting from 0, followed by a new line.
 * Return: 0 if success
 */
int main(void)
{
	int c = 48;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
