#include <stdio.h>
#include <stdlib.h>

/**
 * main - adder
 * @argc: args n
 * @argv: args values
 * Return: 0 if success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i = 1;
	long int r = 0;
	char *ptr = '\0';

	while (i < argc)
	{
		r += strtol(argv[i], &ptr, 10);
		if (*ptr != '\0')
		{
			puts("Error");
			return (1);
		}
		i++;
	}
	printf("%ld\n", r);

	return (0);
}
