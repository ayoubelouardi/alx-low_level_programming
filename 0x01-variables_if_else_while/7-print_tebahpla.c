#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line
 * Return: 0 if success
 */
int main(void)
{
	char c = 'z';

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
