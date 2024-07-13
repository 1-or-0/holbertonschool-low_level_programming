#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc.
 *
 * @b: The size of the memory to be allocated.
 *
 * Return: NULL if the allocation fails,
 * or a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
		return (NULL);

	return (malloc(b));
}
