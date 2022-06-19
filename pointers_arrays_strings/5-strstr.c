#include "main.h"
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
int i;

	for (i = 0; haystack[i] >= 0; i++)
	{
		if (haystack[i] == needle)
		{
			return (haystack + i);
		}
	}
return (0);
}
}
