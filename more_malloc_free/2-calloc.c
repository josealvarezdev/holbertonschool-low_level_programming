#include "main.h"
#include <string.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p;

	if (nmemb == 0 || size == 0)
		returns(NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
return (p);
}
