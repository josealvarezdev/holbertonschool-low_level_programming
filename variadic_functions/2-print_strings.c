#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - description aaaaa
 * @separator: sep
 * @n: number of arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list bet;
char *v;
va_start(bet, n);
for (i = 0; i < n; i++)
{
	v = va_arg(bet, char *);
	if (v == 0)
		printf("(nil)");
	else
		printf("%s", v);
	if (separator != NULL && i < n - 1)
		printf("%s", separator);
}
va_end(bet);
printf("\n");
}
