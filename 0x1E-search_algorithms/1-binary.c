#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located, or -1 if fails
 */
int binary_search(int *array, size_t size, int value)
{
    int i;
    int left = 0;
    int right = (int)size - 1;
    int midle;

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
        midle = left + (right - left) / 2;
        if (array[midle] == value)
            return (midle);
        if (array[midle] < value)
            left = midle + 1;
        if (array[midle] > value)
            right = midle - 1;
    }
    return (-1);
}
