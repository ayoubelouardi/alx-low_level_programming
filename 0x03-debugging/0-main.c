#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	positive_or_negative(n);
	return (0);
}
