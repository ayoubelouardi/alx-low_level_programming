#include <stddef.h>

/**
 * array_iterator - array iterator
 * @array: a pointer to the array
 * @size: the size of array
 * @action: the action to perform
 * Description: doeing a specific action on all the array
 * elements
 * Return: 0 if success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
