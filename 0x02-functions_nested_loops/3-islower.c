#include "main.h"

/**
 * _islower - check for lowercase character.
 *
 * @c: the char
 *
 * Return:
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 */
int _islower(int c)
{
	if ('a' < c && c < 'z')
		return (1);
	return (0);
}
