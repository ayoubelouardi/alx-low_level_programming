#include <unistd.h>

/**
 * main - Write a C program that prints a specific quote to standard error
 * without using printf or puts.
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quote, 59);

	return (1);
}
