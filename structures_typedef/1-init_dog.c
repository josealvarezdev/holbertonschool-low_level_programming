#include <stdio.h>
#include "dog.h"
/**
 *init_dog - inicializando la variable dog
 *@d: no idea
 *@name: name od dogchow
 *@age: yo on float
 *@owner: Own
 *Return: Nada
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
