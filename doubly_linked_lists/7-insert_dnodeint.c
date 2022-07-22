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
	dlistint_t *new = NULL, *tmp = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!tmp)
		return (NULL);
	while (tmp)
	{
		if (i == index - 1)
		{
			if (!tmp->next)
				return (add_dnodeint_end(h, n));
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			new->n = n;
			new->next = tmp->next;
			new->prev = tmp;
			tmp->next = new;
			tmp = new->next;
			tmp->prev = new;
			return (new);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
