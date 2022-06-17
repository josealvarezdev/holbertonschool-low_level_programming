#include "main.h"
#include <string.h>

char *cap_string(char *a)
{
int b[13] = {' ', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
int i = 0;
int j = 0;

for (; a[i] != '\0'; i++)
{
	for(; b[j] != '\0'; j++)
	{
		if (b[j] == a[i])
		{
			a[i + 1] = a[i + 1] - 32;
		}
	}
}
return (a);
}
