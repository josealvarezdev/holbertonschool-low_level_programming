#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - hola empresa que me va a reclutar :D
 * @separator: separator
 * @n: number of arguments
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list kust;

va_start(kust, n);
for (i = 0; i < n; i++)
{
	printf("%d", va_arg(kust, int));
	if(separator != NULL && i < n - 1)
		printf("%s", separator);
}
va_end(kust);
printf("\n");
}
