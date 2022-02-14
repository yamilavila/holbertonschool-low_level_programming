#include "main.h"
/**
 * swap_int - swap the value of the two intergers
 * @a: first parameter
 * @b: second parameter
 * Return: not
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
