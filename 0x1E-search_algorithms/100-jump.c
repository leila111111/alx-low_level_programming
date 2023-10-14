#include "search_algos.h"
#include <math.h>
/**
 * jump_search -  function that searches for a value in a sorted array
 * of integers.
 * @array: pointer to the first element of the array to search.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return: the first index where value is located, or -1 if it fails.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, jmp;

	j = 0;
	jmp = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);
	for (i = j; j < size && array[j] < value; j += jmp)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		i = j;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, j);
	if (j >= size - 1)
		j = size - 1;
	while (i < j && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	if (array[i] == value)
		return ((int)i);
	else
		return (-1);
}
