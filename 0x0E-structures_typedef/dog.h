#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: the name of the dog
 * @owner: the owner of the dog
 * @age: the age of the dog
 * Description: Define a new type struct dog
 */


struct dog
{
	char *name;
	float age;
	char *owner;
}; 

/**
 * typedef dog_t - type for dogs
 */
typedef struct dog dog_t;


/* functions */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
