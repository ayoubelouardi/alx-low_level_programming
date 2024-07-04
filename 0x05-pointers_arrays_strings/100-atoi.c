#include "main.h"

/**
 * _atoi - from string into number
 * @s: number as a string
 * Description: function that convert a string to an integer.
 * Return: Number
 */

/**
 * Problems:
 * signes
 * ouverflow
 */


int _atoi(char *s)
{
	int i = 0;
	int n = 0, x;
	int len = sizeof(s);

	while (i < len)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			x = s[i] - '0';
			n = n * 10 + x;
		}
		i++;
	}

	return (n);
}
