#include "main.h"

/**
* _isalpha - Entry point
* @c: the charachter
* Return: 1 if c is alpha or 0 elseway
*/
int _isalpha(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
