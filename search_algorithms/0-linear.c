#include "search_algos.h"
/**
 * linear_search - linear search algorithm
 * @array: array
 * @size: size of array
 * @value: value to search
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array)
		return (-1);
	for (; i < (int) size; i++)
	{
		printf("Value checked array [%d]= [%d]\n", i, array[i]);
		if (array[i] == value)
			break;
	}
	if (i >= (int) size)
		return (-1);
	else
		return (i);
}
