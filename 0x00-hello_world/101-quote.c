#include <stdio.h>



int main(void)
{
	int max = 120;
	int count = 0;
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	for (count = 0; count < max; count++)
	{
		if (msg[count] == '\0')
		{
			putchar('\n');
			break;
		}
		else
			putchar(msg[count]);
	}
	return (1);
}
