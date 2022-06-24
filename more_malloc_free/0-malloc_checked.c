#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: var
 * Return: pointer
*/
void *malloc_checked(unsigned int b)
{
char *p;

p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
