#include "main.h"

/**
* _islower - Entry point
* @c: the charachter 
* Return: 1 if c is low or 0 elseway
*/
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
