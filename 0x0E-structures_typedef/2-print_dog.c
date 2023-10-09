#include <stdio.h>
#include "dog.h"
#include <stddef.h>

/**
 * print_dog - Prints the details of a struct dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * Description: This function prints the name, age, and owner of the dog.
 * If any element of the dog is NULL, it prints "(nil)" for that element.
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
}

