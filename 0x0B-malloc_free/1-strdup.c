#include "main.h"

/**
 * _strdup - copy strin to a new place on memory
 * @str: string
 * Description:
 * 	function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given
 * as a parameter.
 *	The _strdup() function returns a pointer to a new
 * string which is a duplicate of the string str. Memory
 * for the new string is obtained with malloc, and can be
 * freed with free.
 *
 * Return:
 *    NULL
 * - if str = NULL
 * - if insufficient memory was available
 *  
 * pointer to the duplicated string otherwise.
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[i++] != '\0')
		size++;

	ptr = (char *) malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++) 
		ptr[i] = str[i];
	ptr[++i] = '\0';

	return (ptr);
}
