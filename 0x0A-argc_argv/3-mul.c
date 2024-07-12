#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplayer
 * @argc: args n
 * @argb: args values
 * Return: 0 if success, 1 otherwise
 */

int main(int agrc, char *argv[])
{
	long int r;

	if (agrc != 3)
	{
		puts("Error");
		return (1);
	}

	r = atoi(argv[2]) * atoi(argv[1]);

	printf("%ld\n", r);

	return (0);
}
