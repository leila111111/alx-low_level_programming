#include "lists.h"
/**
 * print_dlistint - return  the  number of elements of the list.
 * @h: A pointer to the head of the list.
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *list = h;
	size_t counter = 0;

	while (list != NULL)
	{
		counter++;
		list = list->next;
	}
	return (counter);
}
