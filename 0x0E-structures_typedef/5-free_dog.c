#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a struct dog.
 * @d: Pointer to the struct dog to be freed.
 *
 * Description: This function frees the memory allocated for a struct dog
 * and its associated strings (name and owner). If the input pointer is NULL,
 * no action is taken.
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}

