#include "lists.h"
/**
 * list_len - Count number of elements
 * @h: list pointer
 * Return: count
*/ 

size_t list_len(const list_t *h)
{
int count;
	while (h)
	{
		count++;
		h = h->next;
	}
return (count);
}
