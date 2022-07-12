#include "lists.h"
#include <stddef.h>
#include <string.h>

list_t *add_node(list_t **head, const char *str)

char *strcp = strdup(str);
list_t *new = malloc(sizeof(list_t));

if (new != NULL)
{
	new->str = strcp;
	new->len = strlen(strcp);
	new->next = head;
	head = new;
}
return (new);
}
