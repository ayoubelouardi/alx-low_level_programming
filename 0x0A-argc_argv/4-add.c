#include <stdio.h>
#include <stdlib.h>

/**
 * main - adder
 * @argc: args n
 * @argb: args values
 * Return: 0 if success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int r = 0;
	char *ptr = '\0';

	while (i < argc)
	{
		r += (int) strtol(argv[i], &ptr, 10);
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
