#include <unistd.h>

/**
 * main - print text with write to the stderr
 * Description: using write to print the text to the stderr
 * Return: return error 1
 */

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, msg, sizeof(msg) - 1);
	return (1);
}
