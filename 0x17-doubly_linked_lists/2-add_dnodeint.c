#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The value stored in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return(new);
}
