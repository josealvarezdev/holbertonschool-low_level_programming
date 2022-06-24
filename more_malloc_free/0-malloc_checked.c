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
unsigned int *p;

p = malloc(b * sizeof(unsigned int));
return (p);
}
