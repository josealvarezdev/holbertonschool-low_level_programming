#include "main.h"

char *leet(char *a)
{
int i,j;
char b[10] = "AaEeOoTtLl";
char bt[10] = "4433007711";

for (i = 0; a[i] != '\0'; i++)
{
	for (j = 0; j <= 10; j++)
	{
		if (a[i] == b[j])
		{
			a[i] == bt[j];
		}
	}
return (a);
}
