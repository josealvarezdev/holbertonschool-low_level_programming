#include "main.h"
#include <string.h>

char *string_toupper(char *a)
{
int i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	i++;
	}
}
