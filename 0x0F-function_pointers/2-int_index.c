#include <stdio.h>

/**
 * int_index - Searches for an integer in an array.
 *
 * @array: Pointer to an integer array.
 * @size: The number of elements in the array.
 * @cmp: Pointer to a function
 * Return: The index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
