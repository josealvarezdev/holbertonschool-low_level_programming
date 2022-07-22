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
dlistint_t *newnode = NULL, *bef = *h, *sig;

unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (bef && i < (idx - 1))
	{
		bef = bef->next;
		i++;
	}
	if (!bef)
		return (NULL);

	if (bef->next == NULL)
		return (add_dnodeint_end(h, n));

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	sig = bef->next;
	sig->prev = newnode;
	bef->next = newnode;
	bef->next->prev = newnode;
	newnode->prev = bef;
	newnode->next = sig;
	return (newnode);
}

