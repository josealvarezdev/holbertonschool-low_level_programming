#include "lists.h"
/**
 * insert_nodeint_at_index - inserta nodo en el lugar del index
 * @head: pointer to pointer
 * @idx: position to ad newnode
 * Return: coso
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *p, *bef, *newnode = NULL;
unsigned int i = 0;

	if (!head)
	{
	return (NULL);
	}

next = *head;
	while(i < idx)
	{	
		if (!p)
		{
			return (NULL);
		}
		bef = p;
		p = p->next;
		i++;
	}
newnode = malloc(sizeof(*newnode));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = p;
	if (bef)
		bef->next = newnode;
	else
		*head = newnode;

	return (newnode);
}
