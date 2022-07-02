#include "variadic_functions.h"
/**
 * holapepe - hola pepe
 * Return: null
*/
void holapepe(va_list list, const char * const format)
{
	while (format == NULL)
	{
		printf("\n");
		return;
	}
/**
 * print_all - a
 * @format: format
*/
void print_all(const char * const format, ...)
{
unsigned int i = 0;
char *st;
va_list list;
va_start(list, format);
holapepe(list, format);
		while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
			case 'c':
					printf("%c", va_arg(list, int));
					break;
			case 's':
					st = va_arg(list, char *);
					if (st == NULL)
					{
						printf("(nil)");
						break;
					}
					printf("%s", st);
					break;
			case 'i':
					printf("%d", va_arg(list, int));
					break;
			case 'f':
					printf("%f", va_arg(list, double));
					break;
			default:
				i++;
				continue;
		}
	if (format[i + 1] != '\0')
		printf(", ");
	i++;
	}
va_end(list);
printf("\n");
	}
