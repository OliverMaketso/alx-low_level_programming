#include "main.h"
#include <stddef.h>

/**
 * swap_int - Swaps the values of two integers.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: This function takes two integer pointers as parameters and swaps
 * the values of the integers they point to.
 */
void swap_int(int *a, int *b)
{
int temp;

if (a != NULL && b != NULL)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

