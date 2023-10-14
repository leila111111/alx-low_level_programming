#include "search_algos.h"
/**
 * interpolation_search - function that searches for a
 * value in a sorted array of integers
 * @array:  pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value to search in
 * Return: index of the number or -1 in case fails
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, j, k, l;

	j = 0;
	k = size - 1;

	if (array == NULL)
		return (-1);
	while (size)
	{
		l = ((k - j) / (array[k] - array[j])) * (value - array[j]);
		i = j + l;
		printf("Value checked array[%d]", (int)i);
		if (i < size)
			printf(" = [%d]\n", array[i]);
		else
		{
			printf(" is out of range\n");
			break;
		}
		if (array[i] == value)
			return ((int)i);
		if (array[i] < value)
			j = i + 1;
		if (array[i] > value)
			k = i - 1;
	}
	return (-1);
}
