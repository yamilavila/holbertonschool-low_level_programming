#include "main.h"
/**
 **_strncpy - fuction that copies a string
 * @src: source string
 * @dest: destination string
 * @n: # of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int dst;

	for (dst = 0; dst < n && src[dst] != '\0'; dst++)
	{
		dest[dst] = src[dst];
	}
	while (dst < n)
	{
		dest[dst] = '\0';
		dst++;
	}
	return (dest);
}
