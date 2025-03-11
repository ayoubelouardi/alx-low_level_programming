#include "main.h"

/**
 * _isdigit - Check for a digit (0-9)
 *
 * @c: number
 *
 * Return:
 * 1 - digit
 * 0 - otherwise
 */
int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}
