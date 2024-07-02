#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string.
 * @s: Write a function that reverses a string.
 * Description: Write a function that reverses a string.
 */

void rev_string(char *s)
{
	int i = 0;
	int len = _strlen(s);
	char tmp;

	while (i <= (len / 2))
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;

		i++;
	}
	*(s + (len + 1)) = '\0';
}
