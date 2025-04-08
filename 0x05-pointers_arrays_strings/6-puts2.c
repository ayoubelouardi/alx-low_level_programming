#include "main.h"

/**
 * puts2 - Prints every other character of a string starting with the first
 * @str: Pointer to the string
 */
void puts2(char *str)
{
	int i = 0, j = i;

	while (*(str + i) != '\0')
	{
		if (j % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
		j = i;
	}
	_putchar('\n');
}
