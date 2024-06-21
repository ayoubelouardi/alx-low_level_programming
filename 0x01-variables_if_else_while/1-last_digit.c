#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the value of the last digit of n
 * Description:
 * The output of the program should be:
 * The string Last digit of, followed by n,
 * followed by the string is, followed by
 * if the last digit of n is greater than 5:
 * the string and is greater than 5
 * if the last digit of n is 0: the string and is 0
 * if the last digit of n is less than 6 and not 0:
 * the string and is less than 6 and not 0
 * followed by a new line
 * Return: 0 if success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d", n);
	n = n % 10;
	printf(" is %d", n);
	if (n > 5)
	{
		puts(" and is greater than 5");
	}
	else if (n == 0)
	{
		puts(" and is 0");
	}
	else
	{
		puts(" and is less than 6 and not 0");
	}
	return (0);
}
