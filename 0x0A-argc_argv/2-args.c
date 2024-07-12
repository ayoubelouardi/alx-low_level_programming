#include <stdio.h>

/**
 * main - see all my args
 * @argc: arg count
 * @argv: arg value
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
