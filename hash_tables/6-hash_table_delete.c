 #include "hash_tables.h"
/**
 * hash_table_delete - print hash table
 * @ht: table
 * Return: if ht dosent exist dont print
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p, *tmp = NULL;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			tmp = p->next;
			free(p->key);
			free(p->value);
			free(p);
			p  = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
