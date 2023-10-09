#include <stdlib.h>

/**
 * _calloc - allocates memory for an
 * array, setting it to zero.
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: a pointer to the allocated memory
 *         or NULL if nmemb or size is 0, or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *allocated_memory;

	if (nmemb == 0 || size == 0)
		return (NULL);

	allocated_memory = malloc(nmemb * size);

	if (allocated_memory == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		allocated_memory[i] = 0;

	return ((void *)allocated_memory);
}

