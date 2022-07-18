#include "main.h"

unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0;
int i;

if (!b)
	return (0);

	for (i = 0; b[i] != '\0'; i++)

		if (b[i] != '0' && b[i] != '1')
			return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		res *=2;
			if (b[i] == '1')
				res +=1;
	}
return (res);
}
