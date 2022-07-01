#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_string - h
 * @separator: sep
 * @n: number of arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list bet;

va_start(bet, n);
for (i = 0; i < n; i++)
{
	if (va_arg(bet, int) == 0)
		printf("(nil)");
	else
		printf("%d", va_arg(bet, int));
	if (separator != NULL && i < n - 1)
		printf("%s", separator);
}
va_end(bet);
printf("\n");
}
