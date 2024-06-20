#include <unistd.h>

/**
 * main - print text with write
 *
 * Description: using write to print the text
 *
 * Return: return error 1
 */

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, msg, 59);
	return (1);
}
