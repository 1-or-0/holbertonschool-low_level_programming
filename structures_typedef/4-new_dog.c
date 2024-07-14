#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Creates a new dog struct.
 * @name: Name of the new dog.
 * @age: Age of the new dog.
 * @owner: Owner of the new dog.
 *
 * Return: NULL if the allocation fails,
 * or a pointer to the allocated memory.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_cpy;
	char *owner_cpy;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	name_cpy = malloc(strlen(name) + 1);

	if (name_cpy == NULL)
	{
		free(name_cpy);
		free(new_dog);
		return (NULL);
	}

	strcpy(name_cpy, name);

	owner_cpy = malloc(strlen(owner) + 1);

	if (name_cpy == NULL)
	{
		free(owner_cpy);
		free(new_dog);
		return (NULL);
	}

	strcpy(owner_cpy, owner);

	new_dog->name = name_cpy;
	new_dog->age = age;
	new_dog->owner = owner_cpy;

	return (new_dog);
}
