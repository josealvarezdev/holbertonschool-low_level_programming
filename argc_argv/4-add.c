#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int i, j, add;
add = 0;
	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (j = 1; j < argc; j++)
	for (i = 0; argv[i]; i++)
	{
		if ((*argv[i] >= 'a' && *argv[i] <= 'z') || (*argv[i] >= 'A' && *argv[i] <= 'Z'))
		{
			printf("Error\n");
			return (1);
		}
add += atoi(argv[i]);
	}
printf("%d\n", add);
return (0);
}
