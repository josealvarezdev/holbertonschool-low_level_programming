#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int j, add;
add = 0;
	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < argc - 1; j++)
	{
		add += atoi(argv[j]);
		printf("%d\n", add);
	}
return (0);
}
