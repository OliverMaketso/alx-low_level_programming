#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog with a copy of name and owner.
 * @name: Pointer to a string representing the dog's name.
 * @age: The dog's age as a float.
 * @owner: Pointer to a string representing the owner's name.
 *
 * Return: Pointer to the newly created struct dog.
 *         NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
if (name == NULL || owner == NULL)
return (NULL);

size_t name_len, owner_len;
dog_t *new_dog_ptr;

name_len = strlen(name);
owner_len = strlen(owner);

new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
return (NULL);

new_dog_ptr->name = malloc(name_len + 1);
new_dog_ptr->owner = malloc(owner_len + 1);

if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
{
free(new_dog_ptr->name);
free(new_dog_ptr->owner);
free(new_dog_ptr);
return (NULL);
}

strcpy(new_dog_ptr->name, name);
strcpy(new_dog_ptr->owner, owner);
new_dog_ptr->age = age;

return (new_dog_ptr);
}

