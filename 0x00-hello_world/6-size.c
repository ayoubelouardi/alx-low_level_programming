#include<stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	pirntf("Size of char: %lu byte(s)\n", (unsigned long) sizeof(char));
	pirntf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(int));
	pirntf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(long int));
	pirntf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(long long int));
	pirntf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(float));
	return (0);
}
