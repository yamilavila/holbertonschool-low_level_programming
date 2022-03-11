#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	unsigned int t = 0;
	char *str, *form = "";
	va_list args;

	va_start(args, format);
	if (format)
	{
		while (format[t])
		{
			switch (format[t])
			{
				case 'c':
					printf("%s%c", form, va_arg(args, int));
					break;
				case 'i':
					printf("%s%i", form, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", form, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", form, str);
					break;
				default:
					t++;
					continue;
			}
			form = ", ";
			t++;
		}
	}
	printf("\n");
	va_end(args);
}







