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
dlistint_t *new, *next1, *prev1 = NULL;
	unsigned int i;

	if (!h)
		return (NULL);

	next1 = *h;
	for (i = 0; i < idx; i++)
	{
		if (!next1)
			return (NULL);
		prev1 = next1;
		next1 = next1->next;
	}

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = next1;
	if (prev)
	{
		prev1->next = new;
		new->prev = prev1; 
	}
	else
		*h = new;

	return (new);
}
