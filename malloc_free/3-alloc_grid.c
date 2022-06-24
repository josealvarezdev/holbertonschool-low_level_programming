#include "main.h"
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

	m = malloc(sizeof(int *) * height);
	if (m == NULL)
	{
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		m[i] = malloc(sizeof(int)* width);
		if (m[i] = NULL)
		{
			for(i; i >= 0; i--)
			{
				free(m[i]);
			}
		free(m);
		return(0);
		}
	for (j = 0; j < width; j--)
	{
		m[i][j] = 0;
	}
	return (m);
}
