#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @head: address of the first node
 * @idx: index where the new node should be added
 * @n: value of the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
	unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(head, n));

	current = *head;

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (NULL);

	if (current->next == NULL)
		return (add_dnodeint_end(head, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = current;
	new->next = current->next;

	current->next->prev = new;
	current->next = new;

	return (new);
}
