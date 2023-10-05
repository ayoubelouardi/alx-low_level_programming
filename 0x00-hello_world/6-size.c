#include<stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	pirntf("Size of char: %d byte(s)\n", sizeof(char));
	pirntf("Size of an int: %d byte(s)\n", sizeof(int));
	pirntf("Size of a long int: %d byte(s)\n", sizeof(long int));
	pirntf("Size of a long long int: %d byte(s)\n", (long long int));
	pirntf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
