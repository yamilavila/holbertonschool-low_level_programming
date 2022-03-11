#include "variadic_functions.h"

/**
 * print_number - print numbers, followed by new line
 * @separator: string
 * @n: arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list args;

	va_start(args, n);
	for (x = 0; x < n; x++)
	{
		if (separator && x != n - 1)
			printf("%i%s", va_arg(args, int), separator);
		else
			printf("%i", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
