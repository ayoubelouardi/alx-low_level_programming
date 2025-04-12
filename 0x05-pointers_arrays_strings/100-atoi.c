#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks if a character is a digit (0-9).
 * @c: The character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string
 *
 * Return: Converted integer value
 */
int _atoi(char *s)
{
	int result = 0, i, j, sign = 0, n = 0;
	char c;

	for (i = 0; *(s + i) != '\0' ; i++)
	{
		c = *(s + i);

		/* check for the number */
		if (_isdigit(c))
		{
			/* enter a loop untile we are not in a number*/
			/* capture the number */
			/* edit result */
			/* break out */
			for (j = 0; _isdigit(*(s + i + j)); j++)
			{
				n = *(s + i + j) - '0';
				result = result * (j == 0 ? 0 : 10) + n;
			}
			break;
		}
		else if (c == '-')
		{
			sign--;
		}
	}

	if (sign % 2 != 0)
	{
		printf("-");
	}

	return (result);
}
