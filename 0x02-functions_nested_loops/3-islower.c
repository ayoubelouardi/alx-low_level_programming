#include "main.h"

/**
 * _islower - check for lowercase character.
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if ('a' < c && c < 'z')
		return (1);
	return (0);
}
