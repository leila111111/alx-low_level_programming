#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *separator = "";

	va_list var;

	va_start(var, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(var, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(var, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(var, double));
					break;
				case 's':
					s = va_arg(var, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(var);
}
