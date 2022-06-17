#include "main.h"
#include <string.h>

char *cap_string(char *a)
{
/**int b[13] = {' ', ';', '.', '!', '?', '"', '(', ')', '{', '}'};**/
char b[] = ",;.!?(){}\n\t\" ";
int i = 0;
int j = 0;

for (; a[i] != '\0'; i++)
{
if (a[0] >= 'a' && a[i] <= 'z')
{
a[0] = a[0] - 32;
}
if (a[i] >= 'a' && a[i] <= 'z')
{
	for(; b[j] != '\0'; j++)
	{
		if (b[j] == a[i])
		{
			a[i + 1] = a[i + 1] - 32;
		}
	}
}
}
return (a);
}
