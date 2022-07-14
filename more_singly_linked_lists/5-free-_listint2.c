#include "lists.h"
/**
 *free_listint2 - free
 *@head: pointer list
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (!head)
		return;
	while (*head)
	{
		p = ((*head)->next);
		free(*head);
		*head = p;
	}
	*head = NULL;
}
