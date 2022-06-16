#include "main.h"
#include <string.h>
/**
 * reverse_array - reverse an array of integers
 * @a: array
 * @n: elements of array
 * Return: Void
*/
void reverse_array(int *a, int n)
{
	int i;
	char temp;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
