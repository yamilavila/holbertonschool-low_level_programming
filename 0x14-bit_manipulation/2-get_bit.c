#include "main.h"

/**
 * get_bit - returns a value of a bit
 * @n: bits
 * @index: bit you want to get
 * Return: indx value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 32)
		return (-1);

	b = n >> index;
	return (b & 1);
}
