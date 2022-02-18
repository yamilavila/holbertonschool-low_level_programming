#include "main.h"

/**
 * *string_toupper - unction that changes lowercase of a string to uppercase
 * @str: string
 * Return: str
 */

char *string_toupper(char *str)
{
	int dst = 0;

	while (str[dst] != '\0')
	{
		dst++;
		if (str[dst] >= 'a' && str[dst] <= 'z')
			str[dst] -= 32;
	}
	return (str);
}
