#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string destination
 * @src: string source
 * Return: destinated string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int a;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (a = 0; src[a] != '\0'; a++)
	{
		dest[i] = src[a];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
