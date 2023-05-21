#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int var;
	int i = 0, j;

	if (n == 0)
	{
		printf("0");
		return;
	}
	var = n;
	while (var != 0)
	{
		var = var >> 1;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		if ((n >> j) & 1)
			printf("1");
		else
			printf("0");
	}
}
