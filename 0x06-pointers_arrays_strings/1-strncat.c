#include "main.h"
/**
 * _strncat - concatenates two string
 * @dest: string destination
 * @src: source string
 * @n: bytes to count
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int dst = 0;
	int dlotro;

	while (dest[dst] != '\0')
	{
		dst++;
	}
	for (dlotro = 0; dlotro < n; dlotro++)
	{
		if (src[dlotro] == '\0')
		{
			break;
		}
		dest[dst] = src[dlotro];
		dst++;
	}
	dest[dst] = '\0';
	return (dest);
}
