#include "lists.h"
/**
 * insert_nodeint_at_index - inserta nodo en el lugar del index
 * @head: pointer to pointer
 * @idx: position to ad newnode
 * Return: coso
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *post;
listint_t *bef;
listint_t newnode;
unsigned int i = 0;
unsigned int j = 0;

newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		return (NULL);
	}
post = *head;
bef = *head;
	while(i > idx)
	{
		post = post->next;
		i++;
	}
	while(j < idx)
	{
		bef = bef->next;
		j++;
	}
	newnode->n = n;
	newnode->next = post;
	bef->next = newnode;
	return (newnode);
}
