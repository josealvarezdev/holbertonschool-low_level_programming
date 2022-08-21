#include "hash_tables.h"
/** hash_table_set - add element to the hash table
 * @ht: hash table you want add a key/value
 * @key: key and cannot empty string
 * @value: value associated to key, can be empty
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	hash_node_t *actual;
	unsigned long int key_indexx;
	key_indexx = key_index((unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (!(ht->array)[key_indexx])
	{
		(ht->array)[key_indexx] = node;
	}
	else
	{
	actual = (ht->array)[key_indexx];
	node->next = actual;
	actual = node;
	}
	return (1);
}
