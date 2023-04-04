#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum
 * @a: imput
 * @size: imput
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int somme, somme1;

	somme = 0;
	somme1 = 0;

	for (i = 0; i < size; i++)
	{
		somme += a[(size * i) + i];
		somme1 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", somme, somme1);
}
