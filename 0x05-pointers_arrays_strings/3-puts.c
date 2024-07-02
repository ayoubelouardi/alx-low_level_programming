#include "main.h"

/**
 * _puts - print string
 * @str: string
 * Description: function that prints a string,
 * followed by a new line, to stdout.
 */

void _puts(char *str)
{
	int i = 0;
	char c;

	while (*(str + i) != '\0')
	{
		c = *(str + i);
		_putchar(c);
		i++;
	}
	_putchar('\n');
}
