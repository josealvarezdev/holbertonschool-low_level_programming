#include "main.h"
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
int i, j;

	for (j = 0; haystack[j]; j++)	
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[j] == needle[i] && *haystack != '\0')
			{
			return (haystack + j);
			}
		}
	}
}
