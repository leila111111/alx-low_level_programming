#include "variadic_functions.h"
/**
 * print_numbers - printing numbers
 * @separator: pointer
 * @n: number of arguments
 * Return: noth
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list var;

	va_start(var, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(var, int));
		else if (separator && i == 0)
			printf("%d", va_arg(var, int));
		else
			printf("%s%d", separator, va_arg(var, int));
	}
	va_end(var);
	printf("\n");
}
