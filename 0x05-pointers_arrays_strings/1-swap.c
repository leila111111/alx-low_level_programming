#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 *
 * @a: number 1 to enter
 * @b: number 2 to enter
 * Return: Always nothing
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
