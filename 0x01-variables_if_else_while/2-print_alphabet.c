#include <stdio.h>

/**
 * main - To print the lowercase alphabet using the putchar function with
 * restrictions.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 0; i < 26; i++)
	{
		putchar(i + 97);
	}
	putchar(10);

	return (0);
}
