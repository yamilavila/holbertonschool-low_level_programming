#include "main.h"
/**
 * _strlen - calculates the lenght of a string.
 * @s: points to string to be measure.
 * Return: number of chars of the string.
 */

int _strlen(char *s)
{
	int i;
	int cal = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		cal++;
	}
	return (cal);
}
