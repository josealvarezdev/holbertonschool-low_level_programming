#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
* add_node - agrega nodo al inicio
* @head: head
* @str: string
* Return: head
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newlist;
	list_t *p;
	newlist = malloc(sizeof(list_t));
	p = *head;

	if (!newlist)
		return (NULL);

	newlist->str = strdup(str);
	newlist->len = strlen(str);
	newlist->next = NULL;

	while (p->next)
	{
		p = head->next;
	}
	p->next = newlist;
return (head);
}
