#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * a - z
 * A - Z
 * 0 - 9
 */
char gen_between(char a, char b);

int main(void)
{
	int sum = 0, i;
	char c;

	while (sum <= 2772)
	{
		c = gen_between('a', 'z');
		printf("%c", c);
		sum += c;
	}
	printf("%d", sum);

	return 0;
}

char gen_between(char a, char b)
{
	char c;

	c = a + (rand() % b);

	return (c);
}
