#include "dog.h"

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
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
