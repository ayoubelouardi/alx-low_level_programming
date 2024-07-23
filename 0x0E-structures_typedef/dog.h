#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: the name of the dog
 * @owner: the owner of the dog
 * @age: the age of the dog
 * Description: Define a new type struct dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
