#include "main.h"
/**
 * rev_string - print reverse array
 * @s: array char
 * Return: Void
*/
void rev_string(char *s)
{
int count = 0;
int end, begin;
count = 0;
while (*s != '\0')
{
count++;
s++;
}
end = count -1;
 for (begin = 0; begin < count; begin++)
{
r[begin] = s[end];
end--;
}
r[begin] = '\0';
_putchar(r[begin]);
return (0);
}
