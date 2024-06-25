#include "main.h"

/**
 * main - Entry point
 * Description: Longer description of the function)?
 * Return: 0 if success
 */

int main(void)
{
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
{
	int i = 0;
	int j = 0;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(i + 97);
		}
		_putchar('\n');
	}
}
