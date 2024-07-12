#include <stdio.h>

/**
 * main - print n of my arg
 * @argc: n of arg
 * @argv: value of arg
 * Return: 0 if success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
