#include "main.h"

/**
 * main - print the name of the file
 * Description: prints the name of the file it was
 * compiled from, followed by a new line.
 * Return: 0 if success
 */

int main(void)
{
	char *s = __FILE__;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');

	return (0);
}
