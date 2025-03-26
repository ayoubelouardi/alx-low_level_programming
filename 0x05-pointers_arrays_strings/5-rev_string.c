#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string
 */
void rev_string(char *s)
{
	int len = 0, i, j;
	char c;

	while (*(s + len) != '\0')
		len++;

	for (i = len - 1, j = 0; i > len / 2; i--, j++)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
