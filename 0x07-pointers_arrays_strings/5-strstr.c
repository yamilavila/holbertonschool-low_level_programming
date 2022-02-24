#include "main.h"
/**
 * _strstr - finds the substring needle in the string haystack.
 * @haystack: main string
 * @needle: substring
 * Return: pointer or null
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	if (*needle == '\0')
		return (haystack);
	if (*needle == 0)
		return (haystack);

	for (a = 0; haystack[a] != '\0'; a++)
	{
		b = 0;
		while (haystack[a + b] == needle[b])
			b++;
		if (needle[b] == '\0')
			return (&haystack[a]);
	}
	return ('\0');
}
