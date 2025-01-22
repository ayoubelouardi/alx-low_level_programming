#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase using _putchar.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(i + 'a');
	}
	_putchar('\n');
}
