#include <stdio.h>
#include <stdlib.h>
/**
 * main - add digits
 * @argc: num
 * @argv: array
 * Return: numeritos
*/
int main(int argc, char **argv)
{
int i, j, add;
add = 0;
	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (j = 1; j < argc; j++)
	{
		for (i = 0; argv[j][i]; i++)
		{
			if ((argv[j][i] >= 'a' && argv[j][i] <= 'z') || (argv[j][i] >= 'A' && argv[j][i] <= 'Z'))
			{
				printf("Error\n");
				return (1);
			}
add += atoi(argv[i]);
		}
	}
printf("%d\n", add);
return (0);
}
