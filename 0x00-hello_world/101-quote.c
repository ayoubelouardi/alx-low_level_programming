#include <unistd.h>

/* 
 * ssize_t write(int fd, const void buf[.count], size_t count);
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\0";

	write(2, &msg, sizeof(msg));
	return (0);
}
