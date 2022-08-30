#include "search_algos.h"
/**
 * binary_search - binary search algorithm
 * @array: array
 * @size: size of array
 * @value: value to search
 * Return: position of value, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, mid = 0, i = 0;

	if (!array)
		return (-1);

	printf("Searching in array: ");
	for (; i < size; i++)
		printf("%d%s", array[i], i != size - 1 ? ", " : "");
	printf("\n");
	while (start <= end)
	{
		mid = (int)start + (end - start) / 2;
		printf("Searching in array: ");
		for (i = 0; i < mid; i++)
			printf("%d%s", array[i], i != (mid - 1) ? ", " : "");
		printf("\n");
		if (array[mid]  == value)
			break;
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
		}
	if (array[i] == value)
		return (mid);
	else
		return (-1);
}
