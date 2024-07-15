#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: Description of parameter x
 * @c: Description of parameter x
 * Return:
 * NULL if size = 0
 * pointer to the array otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	size_t i;

	ptr = (char *)malloc(size * sizeof(char));
	if (size == 0 || ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
