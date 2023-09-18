#include <stddef.h>
#include "main.h"
/**
 * reset_to_98 - Updates the value pointed to by an integer pointer to 98.
 *
 * @n: A pointer to an integer.
 *
 * Description: This function takes a pointer to an integer as a parameter and
 * updates the value it points to 98.
 */
void reset_to_98(int *n)
{
	/* Check if the pointer is not NULL to avoid dereferencin NULL pointer */
	if (n != NULL)
	{
	*n = 98; /* Update the value pointed to by n to 98 */
	}
}

