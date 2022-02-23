#include "main.h"
/**
 * *_strchr - locate character in string
 * @s: string
 * @c: character
 * Return: char or null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		s++;

		if (*s == c)
			return (s);
	}
	if (*s == c)
		return (s);
	return ('\0');
}
