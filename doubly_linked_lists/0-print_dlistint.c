#include <stdio.h>
#include "lists.h"
/**
* print_dlistint - Print lists dou
* @h: list
* Return: Count
*/
size_t print_dlistint(const dlistint_t *h)
{
int count = 0;

while (h)
{
count++;
printf("%d", h->n);
h->next;
}
return (count);
}
