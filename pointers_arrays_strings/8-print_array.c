#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array of integers
 * @a: var 1
 * @n: var 2
 * Return: Nothing
*/
void print_array(int *a, int n)
{
	int count;

	for(count = 0; count < n; count++)
	{
		if (count == (n - 1))
		{
		printf("%d", a[count]);
		}
		else
		{
		printf("%d, ", a[count]);
		}
	}
	/*_putchar(10);*/
}
