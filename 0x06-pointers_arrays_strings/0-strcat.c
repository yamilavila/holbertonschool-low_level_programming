#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string destination
 * @src: string source
 * Return: destinated string
 */

char *_strcat(char *dest, char *src)
{
	int dst1 = 0;
	int dst2;

	while (dest[dst1] != '\0')
	{
		dst1++;
	}
	for (dst2 = 0; src[dst2] != '\0'; dst2++)
	{
		dest[dst1] = src[dst2];
		dst1++;
	}
	dest[dst1] = '\0';
	return (dest);
}
