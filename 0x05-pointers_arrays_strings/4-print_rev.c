#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - print a string in reverse
 * @s: string
 * Description: Write a function that prints a string,
 * in reverse, followed by a new line.
 */

void print_rev(char *s)
{
	int i = _strlen(s) + 1;
	char c;

	while (i >= 0)
	{
		c = *(s + i);
		_putchar(c);
		i--;
	}
	_putchar('\n');
}
