#include "search_algos.h"
/**
 * print_array - print array
 * @array: array
 * @b: start
 * @e: end
*/
void print_array(int *array, int b, int e)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = b; i < e; i++)	
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}
/**
 * binary_search - binary search algorithm
 * @array: array
 * @size: size of array
 * @value: value to search
 * Return: position of value, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, mid = 0;

	if (!array)
		return (-1);

	while (start <= end)
	{
		print_array(array, start, end);
		mid = (int)start + (end - start) / 2;
		if (array[mid]  == value)
			break;
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
		}
	if (array[mid] == value)
		return (mid);
	else
		return (-1);
}
