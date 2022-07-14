#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head: header singly linked list
 * Return: value
 */
int pop_listint(listint_t **head)
{
int k = 0;
listint_t *p = *head;

if (*head == NULL)
{
	return (0);
}
*head = p->next;
k = p->n;
free(p);
return (k);
}
