#include <stddef.h>

/**
 * int_index -  ssearches for an integer.
 * @array: the array
 * @size: the size of array
 * @cmp: is a pointer to the function to be used to
 * compare values
 *
 * Description:
 * int_index returns the index of the first element
 * for which the cmp function does not return 0
 *
 * Return:
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/**
	 * do the logic only if both *array
	 * && (*cmp) are not NULL
	 */
	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
		return (-1);
	}
	return (-1);
}
