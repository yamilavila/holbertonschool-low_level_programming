#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * @b: pointing to a string of 0 and 1 chars
 * Return: b
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int numbina = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b == '1')
			numbina = ((numbina * 2) + 1);
		else if (*b == '0')
			numbina *= 2;
		else
			return (0);
		b++;
	}
	return (numbina);
}
