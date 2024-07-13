#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: args count
 * @argv: args values
 * Return: 0 if success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int cents, i = 0;
	
	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents)
	{
		if (cents % 25 == 0)
		{
			cents -= 25;
			i++;
		}
		else if (cents % 10 == 0)
		{
			cents -= 10;
			i++;
		}
		else if (cents % 5 == 0)
		{
			cents -= 5;
			i++;
		}
		else if (cents % 2 == 0)
		{
			cents -= 2;
			i++;
		}
		else
		{
			cents -= 1;
			i++;
		}
	}

	printf("%d\n", i);

	return (0);
}
