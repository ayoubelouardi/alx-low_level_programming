#include <stdio.h>

/**
 * main - To print the lowercase alphabet in reverse order using the putchar
 * function with restrictions.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 25; i >= 0; i--)
	{
		putchar(i + 97);
	}
	putchar(10);

	return (0);
}
