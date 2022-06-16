#include "main.h"
/**
 * print_array - print n elements of an array of integers
 * @a: var 1
 * @n: var 2
 * Return: Nothing
*/
void print_array(int *a, int n)
{
	int count = 0;

	while (a[count] != '\0')
	{
		if(count <= n)
		{
		_putchar(a[count]);
		count++;
		}
	}
	_putchar(10);
}
