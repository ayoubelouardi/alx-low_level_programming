#include "main.h"

/**
 * main - Print _putchar followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str = "_putchar\n";
	int i = 0;

	for (i = 0; str[i] != '\n'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
