#include "lists.h"
#include <stddef.h>
#include <string.h>

list_t *add_node(list_t **head, const char *str)

char *strcp;
strcp = strdup(str);

list_t *newlist= malloc(sizeof(list_t));

if (new != NULL)
{
	newlist->str = strcp;
	newlist->len = strlen(strcp);
	newlist->next = head;
	head = newlist;
}
return (new);
}
