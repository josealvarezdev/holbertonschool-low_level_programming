#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}
	for (j = 1; j < argc; j++)
	{
		for (i = 0; argv[j][i]; i++)
		{
			if (isdigit(argv[j][i] == 0))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
printf("%d\n", add);
return (0);
}
