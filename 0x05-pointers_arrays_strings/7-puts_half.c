#include "main.h"
/**
 * puts_half - check code
 *
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i;
	int j;
	int n;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		for (j = i / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	} else if (i % 2)
	{
		for (n = (i - 1) / 2; n < i - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
