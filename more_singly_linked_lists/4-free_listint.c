#include "lists.h"

void free_listint(listint_t *head)
{
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->next);
		free(head);
		head = temp;
	}
}
}
