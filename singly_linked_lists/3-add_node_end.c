#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
* add_node_end - agrega nodo al inicio
* @head: head
* @str: string
* Return: head
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newlist;
	list_t *p;
	
	newlist = malloc(sizeof(list_t));
	p = (*head);

	if (!newlist)
		return (NULL);

	newlist->str = strdup(str);
	newlist->len = strlen(str);
	newlist->next = NULL;

	if (*head == NULL)
	{
		*head = newlist;
		return (*head);
	}
	while (p != NULL && p->next != NULL)
	{
		p = p->next;
	}
	p->next = newlist;
return (*head);
}
