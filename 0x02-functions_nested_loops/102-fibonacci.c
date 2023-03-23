#include <stdio.h>
/**
 * main -  Entry point
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	long j = 1;
	long k = 0;
	long l;

	for (i = 0; i < 50; i++)
	{
		l = k + j;
		printf("%lu", l);

		k = j;
		j = l;

		if (i < 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
