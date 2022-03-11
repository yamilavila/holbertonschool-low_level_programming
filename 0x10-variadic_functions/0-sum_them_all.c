#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: numbers of arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum = 0;
	va_list arguments;

	va_start(arguments, n);
	for (a = 0; a < n; a++)
		sum += va_arg(arguments, int);
	va_end(arguments);
	return (sum);
}
