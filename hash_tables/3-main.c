#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
   - hash_table_t *ht;
    int i = 0;

    ht = hash_table_create(1024);
    hash_table_set(ht, "hetairas", "cool");
    hash_table_set(ht, "mentioner", "cool2");
    while(ht->array[i])
    {
        if (((ht->array)[i])->key)
        {
            printf("%s", ((ht->array)[i])->key);
            printf("%s", (((ht->array)[i])->next)->key);
        }
        i++;
    }
    return (EXIT_SUCCESS);
}
