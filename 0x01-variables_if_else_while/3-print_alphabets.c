#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line
 * Return: 0 if success
 */
int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
