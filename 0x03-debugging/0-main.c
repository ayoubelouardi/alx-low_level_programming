#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 2 == 0)
	{
		n = 0;
	}

	positive_or_negtive(n);
	return (0);
}
