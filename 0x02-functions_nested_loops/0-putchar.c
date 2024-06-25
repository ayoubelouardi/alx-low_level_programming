#include <stdio.h>

/**
 * main - Entry point
 * Description: Longer description of the function)?
 * Return: 0 if success
 */
int main(void)
{
	char str[] = "_putchar\n\0";
	char c;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		putchar(c);
	}
	return (0);
}
