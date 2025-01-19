#include <stdio.h>

/**
 * main - To print the lowercase alphabet excluding the letters 'q' and 'e'
 * using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 0; i < 26; i++)
	{
		if ('e' != i + 97 || 'q' != i + 97)
		{
			putchar(i + 97);
		}
	}
	putchar(10);

	return (0);
}
