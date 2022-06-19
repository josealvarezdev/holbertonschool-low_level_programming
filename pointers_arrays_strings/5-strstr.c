#include "main.h"
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
int i, j, pos;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			pos = i;
			for (j = 0; needle[j]; j++)
			{
				if (needle[j + 1] == NULL)
				{
					return (&haystack[pos]);
				}
			pos++;
			}
		}
	}
return (0);
}
