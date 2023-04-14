#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: num
 * Return: NULL if it fails else return pointer to that new
 * allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, lenght = 0, lenght1 = 0;
	char *pointer;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	while (s1[lenght] != '\0')
		lenght++;
	while (s2[lenght1] != '\0')
		lenght1++;

	if (n >= lenght1)
		n = lenght1;

	pointer = (char *)malloc(sizeof(char) * (lenght + n + 1));

	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < lenght; i++)
		pointer[i] = s1[i];

	while (n > 0)
	{
		pointer[i] = s2[j];
		i++;
		j++;
		n--;
	}
	pointer[i] = '\0';
	return (pointer);
}
