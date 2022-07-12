#include <stdio.h>

size_t print_list(const list_t *h)
{
int count = 0;
const list_t *p = h;

	for (; p; p->next)
	{
		count++;
	}
return (count);
}
