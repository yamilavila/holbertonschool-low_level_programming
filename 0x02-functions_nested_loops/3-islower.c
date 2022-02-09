#include "main.h"
#include <ctype.h>
/**
 * islower- check for lower case
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
