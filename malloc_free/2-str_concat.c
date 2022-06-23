#include "main.h"
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
char *pos;
int a;
int lens1, lens2;

lens1 = strlen(s1);
lens2 = strlen(s2);

pos = malloc(lens1 + lens2 * sizeof(char) + 1);

	for (a = 0; a < lens1; a++)
	{
		pos[a] = s1[a];
	}
	for (a = 0; a < lens2; a++)
	{
		pos[a] = s2[a];
	}
pos[a + 1] = '\0';

return (pos);
}
