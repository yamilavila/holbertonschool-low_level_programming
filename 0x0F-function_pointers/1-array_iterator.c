#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on each element of an array
 * @size: array size
 * @array: data array
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action)
	{
		for (a = 0; a < size; a++)
			action(array[a]);
	}
}
