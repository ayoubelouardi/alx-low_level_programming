#include "main.h"

/**
 * puts_half - print half
 * @str: string
 * Description: print only the second half of the string.
 */

void puts_half(char *str)
{
	int len = (int)sizeof(str) + 1;
	int i = len / 2 + 1;
	char c;

	while (i <= len)
	{
		c = str[i];
		_putchar(c);
		i++;
	}
	_putchar('\n');
}
