#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns lenght of a string
 * @s: is a value
 * Return: Void
*/
int _strlen(char *s)
{
int count;
count = 0;
while (*s != '\0')
	{
	count++;
	s++;
	}
return (count);
}
dog_t *new_dog(char *name, float age, char *owner)
{
int lname, lowner, i, j;
char *name2, *owner2;
dog_t *pos;

pos = malloc(sizeof(dog_t));
	if (pos == NULL)
	{
		return (NULL);
	}
lname = _strlen(name);
lowner = _strlen(owner);

pos->name = malloc(lname * sizeof(pos->name));
	if (pos->name == NULL)
	{
		free(pos->name);
		return (NULL);
	}
pos->owner = malloc(lowner * sizeof(pos->owner));
	if (pos->owner == NULL)
	{
		free(pos->owner);
		return (NULL);
	}
pos->age = age;
	for (i = 0; i < lname; i++)
	{
		name2[i] = name[i];
	}
	for (j = 0; j < lowner; j++)
	{
		owner2[j] = owner[j];
	}
	return (pos);
}
