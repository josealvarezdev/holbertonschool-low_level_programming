#include "main.h"
#include <string.h>
/**
 * string_nconcat
 * @s1: array 1
 * @s2: array2
 * @n: n bytes
 * Return: newly memory space
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int *p;
unsigned int sizes1;
int i, j;

sizes1 = strlen(s1);
p = malloc((sizes1 + n) + 1);
	for (i = 0; i <= sizes1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j <= n; j++)
	{
		p[i] = s[j];
		i++;	
}
}
