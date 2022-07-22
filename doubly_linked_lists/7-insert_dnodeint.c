#include "lists.h"
/**
 * insert_dnodeint_at_index - inserta nodo en el lugar del index
 * @h: pointer to pointer
 * @idx: position to ad newnode
 * @n: number
 *Return: coso
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *next, *prev = NULL;
	unsigned int i;

	if (!head)
		return (NULL);

	next = *head;
	for (i = 0; i < idx; i++)
	{
		if (!next)
			return (NULL);
		prev = next;
		next = next->next;
	}

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = next;

	if (prev)
		prev->next = new;
	else
		*head = new;
	return (new);
}
