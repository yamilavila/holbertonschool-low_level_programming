#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located;
 * is not present is NULL, return -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t L = 0;
	size_t H = size - 1;
	size_t mid;

	if (array == NULL || !size)
		return (-1);

	while ((array[H] != array[L]))
	{
		mid = L +
			(((double)(H - L) / (array[H] - array[L])) * (value - array[L]));
		if (mid >= size)
		{
			printf("Value checked array[%lu] is out of range\n", mid);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			L = mid + 1;
		else if (array[mid] > value)
			H = mid - 1;
		else
			return (mid);
	}
	if (array[L] == value)
		return (L);
	return (-1);
}
