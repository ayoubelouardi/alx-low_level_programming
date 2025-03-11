#include "main.h"

/**
 * _isupper - Check for uppercase character
 *
 * Description: function that checks for uppercase characters.
 *
 * @c: char
 *
 * Return:
 * 1 - uppercase
 * 0 - otherwise
 */
int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}
