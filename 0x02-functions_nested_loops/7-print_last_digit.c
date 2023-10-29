#include "main.h"

/**
* print_last_digit - print the last digit of a number
* @n: the int to extract the last digit into it
* @a: the int that we need to find the end of it
* Return: value of the last number
*/
int print_last_digit(int a)
{
	int n;

	if (a < 0)
	{
		a = -a;
	}
	n = a % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}

