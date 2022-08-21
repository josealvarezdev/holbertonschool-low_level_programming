#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: table
 * Return: if ht dosent exist dont print
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;

	if (!ht)
		return;
	for (i = 0; ht && i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			if (p->key != NULL && p->value != NULL)
                free(p->key);
                free(p->value);
                free(p);
		}
	}
	free(ht->array);
    free(ht);
}s