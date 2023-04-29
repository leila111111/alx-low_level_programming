#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the listint_t list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (current != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("%d\n", h->n);
		h = h->next;
		count++
	}
	return (count);
}
