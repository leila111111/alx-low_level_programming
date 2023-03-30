#include "main.h"

/**
 * reverse_array - function that reverses an array of integers
 * @a: array
 * @n: element's number
 */
void reverse_array(int *a, int n)
{
	int i, j, l;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		l = a[i];
		a[i] = a[j];
		a[j--] = l;
	}
}
