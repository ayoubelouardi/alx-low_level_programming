#include "main.h"

/**
* print_alphabet is a function for printing all ;
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
