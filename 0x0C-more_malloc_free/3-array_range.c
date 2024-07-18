#include "main.h"
#include "0-malloc_checked.c"

/**
 * array_range - creates an array of integers.
 * @min: first number
 * @max: last number
 * Description:
 *
 * function that creates an array of integers.
 *
 * The array created should contain all the values from min
 * (included) to max (included), ordered from min to max
 *
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */


int *array_range(int min, int max)
{
	int size, j;
	int *ptr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = (int *) malloc_checked(size * sizeof(int));

	for (j = 0; j < size; j++)
		ptr[j] = min + j;

	return (ptr);
}
