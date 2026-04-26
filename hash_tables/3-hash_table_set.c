#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * update_value - Updates value of existing key in hash table
 * @node: The node to check
 * @key: The key to find
 * @value: The new value
 *
 * Return: 1 if updated, 0 if key not found
 */
static int update_value(hash_node_t *node, const char *key, const char *value)
{
	char *value_copy;

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			value_copy = strdup(value);
			if (value_copy == NULL)
				return (0);
			free(node->value);
			node->value = value_copy;
			return (1);
		}
		node = node->next;
	}
	return (0);
}

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table
 * @key: The key string (cannot be empty)
 * @value: The value string to associate with the key
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (update_value(ht->array[index], key, value))
		return (1);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
