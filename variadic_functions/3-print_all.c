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
						printf("(nil)");
					printf("%s", va_arg(list, char *);
					break;
			case 'i':
					printf("%d", va_arg(list, int));
					break;
			case 'f':
					printf(%f, va_arg(list, float));
					break;
			printf(",");
		}
	i++;
	}
printf("\n");
va_end(list);
}
