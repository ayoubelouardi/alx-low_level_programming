#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line
 * Return: 0 if success
 */
int main(void)
{
	char c = '0';

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
