#include "variadic_functions.h"

/**
 * sum_them_all - function returning the sum of all its parameters
 * @n: number of arguments
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list var;

	va_start(var, n);

	for (i = 0; i < n; i++)
		sum += va_arg(var, int);
	va_end(var);
	return (sum);
}
