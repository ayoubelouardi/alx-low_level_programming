/**
 * swap_int - swap function
 * @a: first int
 * @b: second int
 * Description: function that swaps the values
 * of two integers.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
