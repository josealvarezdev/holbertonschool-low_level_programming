#include "main.h"
#include <string.h>

void reverse_array(int *a, int n)
{
	int len = 0;
	int i;
	char temp;

	while (a[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < (len / 2); i++)
	{
		temp = a[i];
		a[i] = a[len - i - 1];
		a[len - i - 1] = temp;
	}
}
