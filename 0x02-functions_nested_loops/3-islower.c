#include "main.h"
#include <ctype.h>
/**
 * _islower- check for lower case
 * @c: int
 * Return: 0
 */

int _islower(int c)
{
	if ((c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
