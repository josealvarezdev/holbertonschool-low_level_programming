#include "main.h"
#include <string.h>

char *string_toupper(char *)
{
int i = 0;
while (*[i] != '\0')
{
if (*[i] >= 'a' && *[i] <= 'z')
{
*[i] = *[i] - 32;
}
i++;
}
}
