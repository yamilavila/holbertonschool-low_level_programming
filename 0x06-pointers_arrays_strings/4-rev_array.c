#include "main.h"
/**
 * reverse_array - reverses the content of array of integers
 * @a: an array of integers
 * @n: the # of elements to swap
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int dst = 0;
	int dlotro = n - 1;
	int temp;

	for (; dst < dlotro; dst++)
	{
		temp = a[dst];
		a[dst] = a[dlotro];
		a[dlotro] = temp;
		dlotro--;
	}
}
