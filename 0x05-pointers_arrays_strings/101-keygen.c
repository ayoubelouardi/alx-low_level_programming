#include "main.h"

/**
 * main - crack the passwordk
 * Return: 0
 */

int main(void)
{
	char *ss = "asdfasdfaadfssdfasdfsdaaaac\0";
	int i = 0;

	while (ss[i] != '\0')
	{
		putchar(ss[i]);
		i++;
	}
	return (0);
}
