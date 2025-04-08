#include "main.h"

/**
 * puts_half - Prints the second half of a string followed by a new line
 * @str: Pointer to the string
 */
void puts_half(char *str)
{
	int i, len = 0;

	while (*(str + len) != '\0')
		len++;

	i = (len - 1) / 2 + 1;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
