#include "main.h"

/**
 * _atoi - from string into number
 * @s: number as a string
 * Description: function that convert a string to an integer.
 * Return: Number
 */


int _atoi(char *s)
{
	int x = 0, len = 0, i = 0;
	int sign = 0;
	long n = 0;

	/* calculating the len */
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	/* calculate the number */
	for (i = 0; i < len && s[i] != ';'; i++)
	{
		x = s[i];
		if ('0' <= x && x <= '9')
		{
			x = x - '0';
			n = n * 10 + x;
		}
		if (x == '-')
		{
			sign--;
		}
		if (x == '+')
		{
			sign++;
		}
	}

	return (sign < 0 ? n * -1 : n);
}
