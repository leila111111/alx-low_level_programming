nclude "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: the pointer
 * Return: nothing
 */
void print_rev(char *s)
{
	int n = 0;
	int p = _strlen(s);

	for (n = p-1; n >= 0; n--)
		_putchar(s[n]);

	_putchar('\n');
}
