#include "main.h"

/**
 * alloc_grid - 2D array
 * @width: width of the array
 * @height: height of the array
 * Description:
 * function that returns a pointer to a 2 dimensional array
 * of integers.
 * Return: NULL if error, pointer otherwise
 */
int **alloc_grid(int c, int r)
{
	int *ptr, **arr;
	int len = 0, i, j;

	len = sizeof(int*) * r + sizeof(int) * c * r;
	arr = (int**)malloc(len);

	/** 
	 * ptr is now pointing to the first element of the 2D
	 * array it points to the memory just after the row
	 * pointers allocated memory 
	 */
	ptr = (int*)(arr + r);

	if (arr == NULL || ptr == NULL)
		return (NULL);

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
