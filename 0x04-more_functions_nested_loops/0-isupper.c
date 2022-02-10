#include "main.h"
#include <ctype.h>
/**
 * isupper- checks for an uppercase letter.
 * @c: character int
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
