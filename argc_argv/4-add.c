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
	for (j = 1; j < argc; j++)
	{
		if (argv[j] >= 'a' && argv[j] <= 'z ' || argv[j] >= 'A' && argv[j] <= 'Z')
		{
			printf("Error\n");
			return (1);
		}
add += atoi(argv[j]);
	}
printf("%d\n", add);
return (0);
}
