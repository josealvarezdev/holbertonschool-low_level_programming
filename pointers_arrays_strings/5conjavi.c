#include "main.h"

void rev_string(char *s)
{
char *fin = NULL;
char aux = '\0'; //NULL y '\0' es valor 0 parala maquina

	if(!s)
	{
		return;
	}
/* posiciono el puntero al final en el ultimo caracter dif de \0*/
fin = str;
	while (*(fin + 1))
	{
		fin++;
	}
/*Mientras el puntero inicial no pase al final */
	while (s < fin)
	{
	aux = *str;
	*str = *fin;
	*fin = aux;
	s++, fin--;
	}
/*swapeo valores*/
}
