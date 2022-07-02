#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - a
 * @format: format
*/
void print_all(const char * const format, ...)
{
unsigned int i;
char *st;
va_list list;
i = 0;

va_start(list, format);
	while(format[i] != 0)
	{
		switch(format[i])
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
