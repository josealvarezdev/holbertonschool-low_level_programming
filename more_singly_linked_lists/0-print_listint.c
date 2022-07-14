#include <stdio.h>
#include "lists.h"
/**
* print_list - Print lists dou
* @h: list
* Return: Count
*/
size_t print_list(const list_t *h)
{
int count = 0;
const list_t *p = h;

for (; p; p = p->next)
{
if (p->n)
{
printf("%d", p->n);
}
count++;
putchar(10);
}
return (count);
}
