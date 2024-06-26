#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: Longer description of the function)?
 * Return: 0 if success
 */

int main(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return (0);
}

/**
 * print_to_98 - Entry point
 * @n: asdfj
 * Description: Longer description of the function)?
 */
void print_to_98(int n)
{
	if (!(n > 98))
	{
	while (n <= 97)
	{
		printf("%d, ", n++);
	}
	printf("%d\n", 98);
	}
}
