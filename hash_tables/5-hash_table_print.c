#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: table
 * Return: if ht dosent exist dont print
*/
void hash_table_print(const hash_table_t *ht)
{

    unsigned long int i;
	hash_node_t *p;

    if (!ht)
    {
        printf("{}");
        return;
    }
    for (i = 0; ht && i < ht->size; i++)
	{
		p = ht->array[i];
		printf("{");
		while (p)
		{
		    printf(", ");
			printf("'%s': '%s'", p->key, p->value);
			p = p-> next;
		}
		printf("}\n");
	}
}