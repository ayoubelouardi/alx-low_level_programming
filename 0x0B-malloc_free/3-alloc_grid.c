#include "main.h"

/**
 * alloc_grid - 2D array
 * @c: width of the array
 * @r: height of the array
 * Description:
 * function that returns a pointer to a 2 dimensional array
 * of integers.
 * Return: NULL if error, pointer otherwise
 */
int **alloc_grid(int c, int r)
{
	int *ptr, **arr;
	int len = 0, i, j;

	len = sizeof(int *) * r + sizeof(int) * c * r;
	arr = (int **)malloc(len);
	if (arr == NULL)
		return (NULL);

	/**
	 * ptr is now pointing to the first element of the 2D
	 * array it points to the memory just after the row
	 * pointers allocated memory
	 */
	ptr = (int *)(arr + r);

	if (c == 0 || r == 0)
		return (0);
	/**
	 * for loop to point rows pointer to appropriate
	 * location in 2D array
	 */
	for (i = 0; i < r; i++)
		arr[i] = (ptr + c * i);

	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			arr[i][j] = 0;
	/* OR *(*(arr+i)+j) = ++count */

	return (arr);
}
