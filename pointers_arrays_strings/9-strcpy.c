#include "main.h"
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
	int count = 0;
if (!src || !dest)
{
	return(0);
}
while (src[count] != '\0')
{
dest[count] = src[count];
count++;
}
count++;
dest[count] = '\0';
return(dest);
}
