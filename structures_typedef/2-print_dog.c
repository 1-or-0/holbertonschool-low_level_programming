#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints a struct dog.
 *
 * @d: Pointer to a struct dog.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d -> name == NULL || d -> owner == NULL)
	{	
		printf("nil\n");
		return;
	}

	printf("Name: %s\n", d -> name);
	printf("Name: %f\n", d -> age);
	printf("Name: %s\n", d -> owner);
}
