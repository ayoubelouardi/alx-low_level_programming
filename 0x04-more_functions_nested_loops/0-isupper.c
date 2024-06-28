#include "main.h"

/**
 * _isupper - writes the character c to stdout
 * @c: The character to print
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
