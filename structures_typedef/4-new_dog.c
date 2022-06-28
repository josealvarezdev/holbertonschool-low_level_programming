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
 * _strcpy - copy array
 * @dest: destino de copia
 * @src: original
 * Return: 0;
*/
char *_strcpy(char *dest, char *src)
{
	int count = 0;
if (!src || !dest)
{
	return (0);
}
while (src[count] != '\0')
{
dest[count] = src[count];
count++;
}
dest[count] = '\0';
return (dest);
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
(void)age;
int lname;
int lowner;

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
	_strcpy(pos, new_dog);
	return (pos);
}
