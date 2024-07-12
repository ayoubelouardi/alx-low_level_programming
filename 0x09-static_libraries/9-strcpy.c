#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy - copy string
 * @dest: buffer pointed to by dest.
 * @src: string pointed to by src.
 * Description: Write a function that copies the
 * string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * Return: 0 if success
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int len = _strlen(src);

	while (i <= len)
	{
		dest[i] = src[i];
	}

	dest[len + 1] = '\0';
	return (dest);
}
