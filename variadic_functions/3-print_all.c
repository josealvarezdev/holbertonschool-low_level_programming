#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

void print_all(const char * const format, ...)
{
unsigned int i;
char *st;
va_list list;
i = 0;

va_start(list, format);
	while(format[i])
	{
		switch(format[i])
		{
			case 'c':
					printf("%c", va_arg(list, int));
					printf(",");
					break;
			case 's':	
					st = va_arg(list, char *);
					if (st == NULL)
					{
						printf("(nil)");
						break;
					}
					printf("%s", va_arg(list, char *));
					printf(",");
					break;
			case 'i':
					printf("%d", va_arg(list, int));
					printf(",");
					break;
			case 'f':
					printf("%f", va_arg(list, double));
					printf(",");
					break;
			default:
				continue;
		}
	i++;
	}
printf("\n");
va_end(list);
}
