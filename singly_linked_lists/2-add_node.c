#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>

list_t *add_node(list_t **head, const char *str)

char *newlist;
char *strcp;
strcp = strdup(str);

list_t newlist= malloc(sizeof(list_t));

if (newlist != NULL)
{
	newlist->str = strcp;
	newlist->len = strlen(strcp);
	newlist->next = head;
	head = newlist;
}
return (new);
}
