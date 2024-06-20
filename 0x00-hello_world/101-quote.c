#include <unistd.h>

/**
 * main - print text with write
 * Description: using write to print the text
 * Return: 0 if success
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\0";

	write(2, &msg, sizeof(msg));
	return (0);
}
