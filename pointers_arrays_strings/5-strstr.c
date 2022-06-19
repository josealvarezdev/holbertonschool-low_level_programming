#include "main.h"
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
int i, j;
char *p;

	for (j = 0; haystack[j]; j++)	
	{
		for (i = 0; needle[i]; i++)
		{
			if (*haystack == needle[i] && *haystack != '\0')
			{
			p = &haystack;	
			return (p);
			}
		}
	}
}
