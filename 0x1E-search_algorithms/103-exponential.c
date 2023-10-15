#include "search_algos.h"

/**
 * binary_search_other - function that searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @left: left index
 * @right: right index
 * @value: value to search for
 * Return: the index where value is located, or -1 if fails
 */
int binary_search_other(int *array, size_t left, size_t right, int value)
{
	size_t i;
	size_t middle;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		middle = left + (right - left) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}

/**
  * exponential_search -function that searches for a value in a sorted array
  * of integers using the Interpolation search algorithm
  * @array: a pointer to the first element of the array to search in
  * @size: the number of elements in array
  * @value: the value to search for
  * Return:  first index where value is located
  * and  -1 if the value is not present or the array is NULL.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, min;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	if (i < size - 1)
		min = i;
	else
		min = size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, min);
	return (binary_search_other(array, i / 2, min, value));
}
