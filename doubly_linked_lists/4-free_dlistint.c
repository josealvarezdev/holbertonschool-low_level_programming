#include "lists.h"
/**
 * dfree_listint - free
 * @head: head
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
}
