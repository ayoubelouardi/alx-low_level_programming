#include "main.h"

/**
 * _strcpy - Copies a string from src to dest
 * @dest: Pointer to destination buffer
 * @src: Pointer to source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
