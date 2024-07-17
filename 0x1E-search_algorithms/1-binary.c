#include "search_algos.h"


/**
 * print_arr - Prints the elements of an array
 * @array: A pointer to the first element of the array to print
 * @low: The starting index of the array
 * @high: The ending index of the array
 */
void print_arr(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i > low)
		{
			printf(", ");
		}
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - function that searches for a value in a sorted array
 *				   of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the index where the value is located
 *		   -1 if value is not present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t high, low, mid;

	high = size - 1;
	low = 0;
	mid = 0;

	if (array == NULL || value == 0)
	{
		return (-1);
	}
	while (low <= high)
	{
		print_arr(array, low, high);

		mid = low + (high - low) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
