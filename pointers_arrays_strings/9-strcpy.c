#include "main.h"
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
if (!src || !dest)
{
	return(0);
}
for (src; src <= '\0'; src++)
{
*dest = *src;
}
}
