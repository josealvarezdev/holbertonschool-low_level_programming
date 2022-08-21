#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *ht = NULL;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if(!ht)
		return(NULL);
	ht->size = size;
	ht->array = malloc(size * sizeof(hash_table_t *));
	if(!ht->array)
	{
		free(ht);
		return (NULL);
	}
	while(i < size)
	{
		ht->array[i] = NULL;
		i++;
	}
	return (ht);
}
