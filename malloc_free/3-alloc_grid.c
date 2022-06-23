#include <stdlib.h>
#include <string.h>

int **alloc_grid(int width, int height)
{
int *fil;
int *coco;
int i, j;
if (width < 1 || height < 1)
{
return (NULL);
}
fil = malloc(width * sizeof(int));
coco = malloc(height * sizeof(int));

if (fil == NULL)
return (NULL);
if (coco == NULL)
return (NULL);

for (i = 0; i < width; i++)
{
	coco[i] = 0;
	for(j = 0; j < height; j++)
	{
		fil[j] = 0;
	}
return (0);
}
}
