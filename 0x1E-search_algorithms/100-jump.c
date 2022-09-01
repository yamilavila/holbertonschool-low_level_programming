#include "search_algos.h"
#include "math.h"
/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: if value is not present is NULL, -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t index = 0;
	size_t move = sqrt(size);

	if (array == NULL)
		return (-1);

	while (index < size && array[index] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		index += move;
	}
	move = index - move;
	printf("Value found between indexes [%lu] and [%lu]\n", move, index);

	if (index >= size)
		index = size - 1;

	while (move <= index)
	{
		printf("Value checked array [%lu] and [%d]\n", move, array[move]);
		if (array[move] == value)
			return (move);
		move++;
	}
	return (-1);
}
