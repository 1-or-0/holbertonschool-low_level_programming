#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog.
 *
 * @d: Pointer to a struct dog
 * @name: Name for initializing the struct dog
 * @age: Age for initializing the struct dog
 * @owner: Owner for initializing the struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
