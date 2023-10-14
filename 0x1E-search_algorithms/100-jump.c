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

	if (array == NULL || size == 0)
		return (-1);
	jmp = sqrt(size);

	for (i = 0; i < size; i += jmp)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (i >= size || array[i] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			       i - jmp, i);
			for (j = i - jmp; j < i && j < size; j++)
			{
				printf("Value checked array[%ld] = [%d]\n",
				       j, array[j]);
				if (array[j] == value)
					return ((int)j);
			}
			return (-1);
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i - jmp, i);
	return (-1);
}
