#include "main.h"
#include "0-malloc_checked.c"

unsigned int len(char *str);

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from s2
 *
 * Description:
 *
 * function that concatenates two strings.
 * The returned pointer shall point to a newly allocated
 * space in memory, which contains s1, followed by
 * the first n bytes of s2, and null terminated
 *
 * if NULL is passed, treat it as an empty string
 *
 * If n is greater or equal to the length of s2
 * then use the entire string s2
 *
 * Return:
 * If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lent_1 = 0, lent_2 = 0, i = 0, j = 0;
	char *ptr;

	/* set len_1 */
	if (s1 == NULL)
		lent_1 = 0;
	else
		lent_1 = len(s1);

	/* set len_2 */
	if (s2 == NULL)
	{
		lent_2 = 0;
	}
	else
	{
		if (n >= len(s2))
			lent_2 = n;
		else
			lent_2 = n;
	}

	/* allocate memory */

	ptr = (char *) malloc_checked(sizeof(char) * (lent_1 + lent_2 + 1));

	/* copy to memory */
	for (i = 0; i < lent_1; i++)
		ptr[j++] = s1[i];
	for (i = 0; i < lent_2; i++)
		ptr[j++] = s2[i];
	ptr[j + 1] = '\0';

	return (ptr);
}

/**
 * len - return string length witouth calcul of \0
 * @s: string
 * Description: return the len of str
 * Return: str len
 */

unsigned int len(char *s)
{
	int i = 0, counter = 0;

	while (*(s + i) != '\0')
	{
		counter++;
		i++;
	}

	return (counter);
}
