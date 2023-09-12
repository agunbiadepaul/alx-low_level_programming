#include "dog.h"

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: The name of the dog
 * @age: Dog's age
 * @owner: Dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
