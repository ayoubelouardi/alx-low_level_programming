#include<stdio.h>

/**
* _islower - Entry point
* c : is the charachter
* Return: 1 if c is low or 0 elseway
*/
int _islower(int c)
{
	if (c >= 97 || c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
