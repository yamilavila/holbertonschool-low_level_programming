#include "main.h"

/**
 * set_bit - sets the value of a bit
 * @n: bits to set
 * @index: start in 0
 * Return: 1 if it worked or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b = 1;

	if (index > 32)
		return (-1);

	b = 1 << index;
	*n = *n | b;
	return (1);
}
