#include "main.h"

/**
 * puts2 - print string
 * @str: string
 * Description: function that prints a string,
 * followed by a new line, to stdout.
 */

void puts2(char *str)
{
	int i = 0;
	char c;

	for (i = 0; i <= (int)sizeof(str); i++)
	{
		c = *(str + i);
		_putchar(c);
		i++;
	}
	_putchar('\n');
}
