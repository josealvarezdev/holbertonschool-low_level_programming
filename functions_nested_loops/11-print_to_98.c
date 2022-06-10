#include "main.h"
#include <stdio.h>
/*
 * print_to_98 - Print to n98
 * Return: Algo
 * @n: Variable
*/
void print_to_98(int n)
{
	while (n >= 98)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		n--;
		}
		else if (n == 98)
		{
		printf("%d", n);
		printf("\n");
		break;
		}
	}
	while (n < 98)
	{
	if (n != 98)
	{
	printf("%d, ", n);
	n++;
	}
	if (n == 98)
	{
		printf("%d", n);
		printf("\n");
		break;
	}
	}
}
