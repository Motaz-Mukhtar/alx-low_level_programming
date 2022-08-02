#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: dog_t type
 * Retrun: Always 0.
 */
void free_dog(dog_t *d)
{
	free(d);
}
