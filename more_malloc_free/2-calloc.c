#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: NULL if the allocation fails,
 *         or a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
