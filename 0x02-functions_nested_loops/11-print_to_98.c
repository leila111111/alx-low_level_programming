#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -  function printing all natural numbers from n to 98
 * @i: is the number to enter
 * Return: void
 */
void print_to_98(int i)
{
	int a;

	if (i <= 98)
	{
		for (a = i; a <= 98; a++)
		{
			printf("%d", a);
			if (a < 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (i == 98)
		printf("%d\n", i);
	else if (i > 98)
	{
		for (a = i; a >= 98; a--)
		{
			printf("%d", a);
			if (a > 98)
				printf(", ");
		}
		printf("\n");
	}
}
