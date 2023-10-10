#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a dog
 * @d: Pointer to the dog to be freed
 *
 * Return: (void)
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Free the memory allocated for name and owner */
		free(d->name);
		free(d->owner);

		/* Free the memory allocated for the dog structure */
		free(d);
	}
}

