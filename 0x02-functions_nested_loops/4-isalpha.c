#include "main.h"


/**
 * _isalpha - function that checks for alphabetic character.
 *
 * @c: the char
 *
 * Return:
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 */

int _isalpha(int c);
{
	if (('a' < c && c < 'z') || ('A' < c && c < 'Z'))
		return (1);
	return (0);
}
