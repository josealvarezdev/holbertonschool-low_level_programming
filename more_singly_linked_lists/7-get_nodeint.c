#include "lists.h"
/**
 * get_nodeint_a0t_index - returns the nth node of linked list
 * @head: header
 * @index: data pos
 * Return: algo
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

int i = 0;

if (head == NULL)
	return (NULL);

	while (i < index)
	{
		head = head->next;
		i++;
	}
return (head);
