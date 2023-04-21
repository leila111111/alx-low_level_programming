#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list var;

	va_start(var, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(var, char *);
		if (!s)
			s = "(nil)";
		if (!separator)
			printf("%s", s);
		else if (separator && i == 0)
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}
	printf("\n");
	va_end(var);
}
