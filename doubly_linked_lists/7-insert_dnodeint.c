#include "lists.h"
/**
* insert_dnodeint_at_index - insert a new node in a given position
* @h: head
* @idx: unsigned int
* @n: int
* Return: *head
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *tmp = *h;

		if (newnode == NULL)
			return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));
	
	newnode = malloc(sizeof(dlistint_t));
	newnode->n = n;
	newnode->prev = tmp;
	newnode->next = tmp->next;
	tmp->next->prev = newnode;
	tmp->next = newnode;
	return (newnode);
}
