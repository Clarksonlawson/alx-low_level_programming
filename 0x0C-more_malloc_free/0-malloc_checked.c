#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: the number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 *         or terminate with status value 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(98);
	}

	return (ptr);
}

