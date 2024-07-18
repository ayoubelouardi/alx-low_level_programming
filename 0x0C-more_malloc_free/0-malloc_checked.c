#include "main.h"

/**
 * malloc_checked - allocate memory.
 * @b: the size of bytes
 * Description:
 * Write a function that allocates memory using malloc.
 * if malloc fails, the malloc_checked function should
 * cause normal process termination with a status
 * value of 98
 * Return: Pointer to the memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
