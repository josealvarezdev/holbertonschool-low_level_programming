#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - 
 * @width: width 
 * @height: height
 * Return: Toy pillo pa
*/
int **alloc_grid(int width, int height)
{
	int **m;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
}
m = malloc(size *(int *) * h)
	if (m == NULL)
	{
	return;
	}
for (i = 0; i < h; i++)
{
	m[i] = malloc(int)* w;
	if (m[i] = NULL)
	{
		for(i; i >= 0; i--)
		{
			free(p[i]);
		}
	free(m);
	return(0);
	}
	for(j = 0; j < w; j++)
	{
		m[i][j] = 0;
	}
return (m);
}
