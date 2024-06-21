#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line.
 * except e and q.
 * Return: 0 if success
 */
int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
