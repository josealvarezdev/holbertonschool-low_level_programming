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
lname = _strlen(name);
lowner = _strlen(owner);

pos->name = malloc(lname * sizeof(pos->name));
	if (pos->name == NULL)
	{
		free(pos);
		return (NULL);
	}
}
