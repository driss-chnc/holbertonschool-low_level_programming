#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *tmp;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (tmp = ht->array[index]; tmp; tmp = tmp->next)
		if (!strcmp(tmp->key, key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (tmp->value ? 1 : 0);
		}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (!new->key || !new->value)
	{
		free(new->key), free(new->value), free(new);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
