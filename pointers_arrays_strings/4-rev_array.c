#include "main.h"
#include <string.h>

void reverse_array(int *a, int n)
{
	int i;
	char temp;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[len - i - 1];
		a[len - i - 1] = temp;
	}
}
