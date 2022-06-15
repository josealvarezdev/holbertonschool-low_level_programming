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
char temporal;
count = 0;
while (*s != '\0')
{
count++;
s++;
}
end = count -1;
for (begin = 0; begin < (count/2); begin++)
{
temporal = s[begin];
s[begin] = s[end];
s[end - begin] = temporal;
}
}
