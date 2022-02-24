#include "main.h"
/**
 * _strspn - search a string for a set of bytes
 * @s: string
 * @accept: bytes accepted
 * Return: bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != s[a]; b++)
		{
			if (accept[b] == '\0')
			{
			return (a);
			}
		}
	}
	return (a);
}
