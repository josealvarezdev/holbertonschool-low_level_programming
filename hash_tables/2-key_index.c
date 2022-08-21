#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @size: size of array
 * @key: is key
 * Return: the index which is the key % size of array
 * Previusly djb2 multiply each character by 33 2^5 + 1
 * And return the key word with a number which
 * represent less colissions
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
