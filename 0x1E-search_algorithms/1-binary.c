#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of int
 * @size: number of elements
 * @array: pointer to the first element of the array to search in
 * @value: value to search for
 * Return: if value is not present in array or if array is NULL
 * return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t index, L, R, mid;

	L = 0;
	R = size - 1;
	mid = 0;

	if (array == NULL)
		return (-1);
	while (L <= R)
	{
		printf("Searching in array: ");
		for (index = L; index <= R; index++)
		{
			if (index != R)
				printf("%d, ", array[index]);
			else
				printf("%d\n", array[index]);
		}
		mid = (L + R) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			L = mid + 1;
		if (array[mid] > value)
			R = mid - 1;
	}
	return (-1);
}
