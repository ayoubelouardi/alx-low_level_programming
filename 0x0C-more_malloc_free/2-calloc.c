#include "main.h"
#include "0-malloc_checked.c"

/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: number of array members
 * @size: size of each member with bytes
 *
 * Description:
 *
 * he _calloc function allocates memory for an array of nmemb
 * elements of size bytes each and returns a pointer
 * to the allocated memory.
 *
 * The memory is set to zero
 *
 * Return:
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 * otherwise return void pointer to the adress of memory
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = (char *) malloc_checked(nmemb * size);

	for (i = 0; i < (size_t) size; i++)
		ptr[i] = 0;

	return (ptr);
}
