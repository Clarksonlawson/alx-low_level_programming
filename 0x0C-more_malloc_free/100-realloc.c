#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory block to be reallocated
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the memory block
 *
 * Return: a pointer to the newly allocated memory block
 *         or NULL if malloc fails or if new_size is zero
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i, min_size;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	min_size = (old_size < new_size) ? old_size : new_size;

	for (i = 0; i < min_size; i++)
		new_ptr[i] = ((char *)ptr)[i];

	free(ptr);

	return ((void *)new_ptr);
}

