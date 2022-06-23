#include "main.h"
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
int size;
char *copy;
char *p;

/*Allocate Memory for copy*/
	size = strlen(str);
	*copy = (char *)malloc(sizeof(char)*size+1);
	if (copy == NULL)
	{
		return ((char *)NULL);
	}
/* Copy String*/
	while (*str)
	{
		p = *str;
		p++;
		str++;
	}
*p = '\0';
return (copy);
}
