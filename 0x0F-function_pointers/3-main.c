#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - calcule project
 * @ac: counter for args
 * @av: an array of strings of args
 *
 * Usage: calc num1 operator num2
 *
 * Description:
 * operator is one of the following:
 * +: addition
 * -: subtraction
 * (*): multiplication
 * /: division
 * %: modulo
 *
 * The program prints the result of the operation,
 * followed by a new line
 *
 * - if the number of arguments is wrong, print Error,
 * followed by a new line, and exit with the status 98
 * - if the operator is none of the above, print Error,
 * followed by a new line, and exit with the status 99
 * - if the user tries to divide (/ or %) by 0, print Error,
 * followed by a new line, and exit with the status 100
 *
 * Return: 0 Always.
 */

int main(int ac, char *av[])
{
	int num1, num2;
	char *s;
	int (*fp)(int, int);

	if (ac != 4)
	{

		puts("Error");
		exit(98);
	}
	else
	{
		num1 = atoi(av[1]);
		num2 = atoi(av[3]);
		s = av[2];

		if ((*s == '/' || *s == '%') && num2 == 0)
		{
			puts("Error");
			exit(100);
		}
		fp = get_op_func(s);
		if (fp == NULL)
		{
			puts("Error");
			exit(99);
		}
		printf("%d\n", fp(num1, num2));
	}

	return (0);
}
