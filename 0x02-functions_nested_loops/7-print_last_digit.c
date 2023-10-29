#include "main.h"

/**
* print_last_digit - print the last digit of a number
* @n : the int to extact the last digit from 
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

	_putchar(n + '0');

	return n;
}

