#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end of the list.
 * @head: pointer to the head of the list.
 * @n: the value of the new node.
 * Return: address of the new element, or NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *list = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (list->next != NULL)
		list = list->next;
	list->next = new;
	new->prev = list;
	return (new);
}
