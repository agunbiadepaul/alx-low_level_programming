#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog and stores a copy of name and owner
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL
 * if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	new_dog_ptr->name = (name != NULL) ? strdup(name) : NULL;
	new_dog_ptr->owner = (owner != NULL) ? strdup(owner) : NULL;

	if ((name != NULL && new_dog_ptr->name == NULL) ||
			(owner != NULL && new_dog_ptr->owner == NULL))
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
