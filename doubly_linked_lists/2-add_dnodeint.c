#include "lists.h"
/**
 * add_dnodeint - agrega un nodo int al inicio
 * @n: number
 * @head: head
 * Return: new *head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *p;

p = malloc(sizeof(dlistint_t));

	if (!p)
		return (NULL);
	p->n = n;
	p->prev = NULL;
	if (*head)
	{
		(*head)->prev = p;
		p->next = *head;
	}
	else
	{
		p->next = NULL;
	}
	*head = p;
	return (*head);
}
