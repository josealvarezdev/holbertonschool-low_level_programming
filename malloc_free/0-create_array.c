#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *pos;

	if (size == 0)
	{
		return (NULL);
	}
pos = malloc(size * sizeof(char));

	if (pos == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; size > i; i++)
		{
			pos[i] = c;
		}
return (pos);
}
