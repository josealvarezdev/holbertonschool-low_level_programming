#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int i, j, add;
	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	/**for (i = 1; i < argc; i++)
	{*/
		for (j = 0; j < *argv[i]; j++)
		{
			add += atoi(argv[i]);
			printf("%d\n", add);
	}
return (0);
}
