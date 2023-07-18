#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees memory allocated for dog's
 * struct
 * @d: relevant struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

