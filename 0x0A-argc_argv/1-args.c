#include "main.h"
#include <stdio.h>

/**
 * main - count numbers of arguments passed
 * @argv: vector
 * @argc: argument count
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
