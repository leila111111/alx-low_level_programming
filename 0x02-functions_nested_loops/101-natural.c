#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
	int i;
	int result = 0;

	for (i = 1023; i >= 0; i--)
	{
		if (i % 3 == 0)
			result = result + i;
		else if (i % 5 == 0)
			result = result + i;
	}
	printf("%d\n", result);
return (0);
}
