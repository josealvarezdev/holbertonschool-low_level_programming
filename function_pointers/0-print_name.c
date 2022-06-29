#include "function_pointers.h"
/**
 * print_name - prints a nam
 * @name: name of the person
 * @f: fun 
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
