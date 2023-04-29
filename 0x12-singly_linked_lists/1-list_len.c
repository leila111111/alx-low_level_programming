#include <stdlib.h>
#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head node of the list.
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
