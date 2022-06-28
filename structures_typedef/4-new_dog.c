#include "dog.h"
#include <stdio.h>
#include <stdlib.h>i
#include <string.h>
/**
 * new_dog - dogchow
 * @name: name
 * @age: age
 * @owner: owner
 * Return: return
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *pos;
int lname, lowner;

pos = malloc(sizeof(dog_t));
	if (pos == NULL)
	{
		return (NULL);
	}
lname = strlen(name);
lowner = strlen(owner);

pos->name = malloc(lname * sizeof(pos->name));
	if (pos->name == NULL)
	{
		free(pos);
		return (NULL);
	}
}
