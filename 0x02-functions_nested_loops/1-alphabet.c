#include "main.h"

/**
 * main - Entry point
 * Description: Longer description of the function)?
 * Return: 0 if success
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - Entry point
 * Description: Longer description of the function)?
 */
void print_alphabet(void)
{
	int i = 0;

	for (i = 0; i < 26; i++)
	{
		_putchar(i + 97);
	}
	_putchar('\n');
}
