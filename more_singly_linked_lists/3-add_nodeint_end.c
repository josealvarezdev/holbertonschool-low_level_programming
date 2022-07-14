#include "lists.h"
/**
 * add_nodeint_end - agrega nodo al final
 * @head: head
 * @n: number
 * Return: head
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode;
listint_t *aux;

newenode = malloc(sizeof(listint_t));
newnode = (*head);

if (!newnode)
	return (NULL);

newnode->n = n;
newnode->next = NULL;

	if (*head = NULL)
	{
		*head = newnode;
		return (*head);
	}
	while (aux != NULL && aux->next != NULL)\
	{
		aux = aux->next;
	}
	aux->next = newnode;
	return (*head);
}
