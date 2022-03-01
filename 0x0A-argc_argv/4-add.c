#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argv: vector
 * @argc: count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b; 
	int dst = 0;

	if (argc > 1)
		for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b]; b++)
				if (argv[a][b] < '0' || argv[a][b] > '9')
					return (printf("Error\n"), 1);
			dst += atoi(argv[a]);
		}
	printf("%i\n", dst);
	return (0);
}
