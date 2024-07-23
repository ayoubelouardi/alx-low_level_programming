#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - returns the length of a string
 * @src: string parameter input
 * @dest: string parameter input
 * Return: length of string
 */

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: string parameter input
 * Return: length of string
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; ++s)
		++counter;

	return (counter);
}

/**
 * init_dog - initialize a variable of type struct dog
 * @d: the struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Description: initialize a variable of type struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(_strlen(name) + 1);
	d->owner = malloc(_strlen(owner) + 1);

	if (d->name == NULL || d->owner == NULL)
		exit(1);

	d->name = _strcpy(d->name, name);
	d->owner = _strcpy(d->owner, owner);

	d->age = age;
}
