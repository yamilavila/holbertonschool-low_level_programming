#include "variadic_functions.h"

/**
 * print_strings -prints strings, followed by a new line
 * @separator: string
 * @n: argument
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list args;
	char *str;

	va_start(args, n);
	for (x = 0; x < n; x++)
	{
		str = va_arg(args, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && !x)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(args);
}
