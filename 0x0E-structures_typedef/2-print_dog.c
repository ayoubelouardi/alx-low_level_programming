#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog
 * @d: struct pointer
 * Description: Longer description of the function)?
 * Return: 0 if success
 */

void print_dog(struct dog *d)
{

	if (!(d == NULL))
	{
		if (d->name == NULL)
			puts("Name: (nil)");
		else if (d->owner == NULL)
			puts("(nil)");
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
}
