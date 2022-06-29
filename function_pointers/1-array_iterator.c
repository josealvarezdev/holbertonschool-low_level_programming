#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - array iterator douh
 * @array: array
 * @size: size
 * @action: action douh
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
int i;

if (array != NULL && action != NULL)
{
	for (i = 0; i < size; i++)
	action(array[i]);
}
}