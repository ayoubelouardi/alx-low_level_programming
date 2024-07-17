#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Description: Longer description of the function)?
 * The returned pointer should point to a newly allocated
 * space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated.
 *
 * Return:
 * NULL on failure,
 * pointer to string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j, size_1 = 0, size_2 = 0;
	char *ptr;

	/* if s1 / s2 is NULL return NULL */
	if (s1 == NULL || s2 == NULL)
		return (NULL);

	/* calcul the size of s1 and s2 */
	while (s1[i++] != '\0')
		size_1++;
	i = 0;
	while (s2[i++] != '\0')
		size_2++;

	/* allocate the size of booth s1 + s2 + 1 */
	ptr = (char *) malloc(sizeof(char) * (size_1 + size_2 + 1));
	/* if error return NULL */
	if (ptr == NULL)
		return (NULL);

	/* concat the s1 + s2 + \0 */
	i = 0;
	for (j = 0; j < size_1; j++)
	{
		ptr[i++] = s1[j];
	}
	for (j = 0; j < size_2; j++)
	{
		ptr[i++] = s2[j];
	}
	ptr[i + 1] = '\0';

	return (ptr);
}
