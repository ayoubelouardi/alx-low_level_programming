#include <stdio.h>
#include "main.h"

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
	int array[5];
	int array_l[1] = {
		98
	};

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 5);
	puts("---");
	print_array(array_l, 0);
	print_array(array_l, -1);

	return (0);
}
