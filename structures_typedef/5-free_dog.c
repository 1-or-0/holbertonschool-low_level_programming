#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees memory allocated for a dog structure.
 *
 * @d: Pointer to allocated memory for a dog structure.
 */
void free_dog(dog_t *d)
{
	free(d);
}
