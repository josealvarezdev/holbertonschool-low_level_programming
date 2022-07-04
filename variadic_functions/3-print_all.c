#include "variadic_functions.h"
#include <stdio.h>
/**
* print_int - a
* @list: list
* Return: a
*/
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_char - a
 * @list: list
 * Return: a
*/
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
* print_float - a
* @list: list
* Return: a
*/
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
* print_string - a
* @list: list
* Return: a
*/
void print_string(va_list list)
{
char *st;
	st = va_arg(list, char *);
	if (st == NULL)
	{
		printf("(nil)");
		return;
	}
printf("%s", st);
}
/**
 * print_all - a
 * @format: asd
 * Return: N
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;
	va_list list;
	char *sep = "";
	pick_al pik[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (pik[j].let != '\0')
		{
			if (pik[j].let == format[j])
			{
				printf("%s", sep);
				pik[j].f(list);
				sep = ", ";
			}
		j++;
		}
	i++;
	}
	va_end(list);
	printf("\n");
}
