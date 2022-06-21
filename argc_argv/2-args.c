#include <stdio.h>

int main(int argc, char *argv[])
{
int i;
	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
		}
	}
return (0);
}
