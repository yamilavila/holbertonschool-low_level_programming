#include "search_algos.h"
#include <stddef.h>

/**
 * linear_search - searches for a value in an array of int
 * using the linear algorithm
 * @array: is a pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * value is not present in array or if array is NULL
 * Return: the first index where value is located, -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array != NULL)
		for (index = 0; index < size; index++)
		{
			printf("Value checked array{%lu] = [%d]\n", index, array[index]);
			if (array[index] == value)
				return (index);
		}
return (-1);
}
