#include "main.h"

char *leet(char *a)
{
int i,j;
char b[10] = "AaEeOoTtLl";
char translate[10] = "4433007711";

for (i = 0; a[i] != '\0'; i++)
{
	for (j = 0, j <= 10; j++)
	{
		if (a[i] == translate[j])
		{
			a[i] == translate[j];
		}
	}
return (a);
}
