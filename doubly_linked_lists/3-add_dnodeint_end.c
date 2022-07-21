#include "lists.h"
/**
 * add_nodeint_end - agrega nodo al final
 * @head: head
 * @n: number
 * Return: head
*/
dlistint_t *add_dnodeint_end(listint_t **head, const int n)
{
dlistint_t *newnode;
dlistint_t *aux;

aux = (*head);
newnode = malloc(sizeof(dlistint_t));

if (!newnode)
	return (NULL);

newnode->n = n;
newnode->next = NULL;
newnode->prev = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	while (aux != NULL && aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = newnode;
	return (*head);
}
