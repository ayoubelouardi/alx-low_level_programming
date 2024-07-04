#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - crack the passwordk
 * Return: 0
 */

int main(void)
{
	int i = 0, j = 0;
	char ss[3][35] = {
		"asdfasdfaadfssdfasdfsdaaaac\0",
		"zzzzzzzzzzzzzzzzzzzzzaq\0",
		"zzzzzzzzzzzzzzEEzzzzzaqj\0"
	};
	srand(time(NULL));
	j = rand() % 3;

	while (ss[j][i] != '\0')
	{
		putchar(ss[j][i]);
		i++;
	}
	return (0);
}
