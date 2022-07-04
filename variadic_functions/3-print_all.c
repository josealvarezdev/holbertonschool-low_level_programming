#include "variadic_functions.h"
#include <stdio.h>
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
void print_char(va_list list)
{
	printf("%c", va_arg(list, char));
}
void print_float
{
	printf("%f", va_arg(list, double));
}
void print_string(va_list list)
{
char *st
	st = va_arg(list, char *)
	if (st == NULL)
	{
		printf("(nil)");
		return;
	}
printf("%s", st)
}
/**
 * print_all - a
 * @format: asd
 * Return: N
*/
void print_all(const char * const format, ...)
{
unsigned int i, j = 0;
va_list list;
char *sep = "";

type picker[] = { 
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{'\0', NULL} };

va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		while(picker[j].let != '\0')
		{
			if (picker[j].let == format[j])
			{
			printf("%s", sep);
			picker[j].f(list);
			sep = ",";
			}
		j++
		}
	i++
	}
va_end(list);
printf("\n");
}
