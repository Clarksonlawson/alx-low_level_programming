#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 * Return: A pointer to the newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	ht->shead = NULL;
	ht->stail = NULL;

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}

/**
 * shash_table_set - Inserts a key/value pair into the sorted hash table
 * @ht: The sorted hash table to insert the key/value pair into
 * @key: The key
 * @value: The value associated with the key
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current_node;

	if (!ht || !key || !value)
		return (0);

	current_node = ht->shead;

	while (current_node && strcmp(current_node->key, key) < 0)
		current_node = current_node->snext;

	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = NULL;
	new_node->snext = current_node;

	if (current_node)
	{
		new_node->sprev = current_node->sprev;
		if (current_node->sprev)
			current_node->sprev->snext = new_node;
		else
			ht->shead = new_node;
		current_node->sprev = new_node;
	}
	else
	{
		new_node->sprev = ht->stail;
		if (ht->stail)
			ht->stail->snext = new_node;
		else
			ht->shead = new_node;
		ht->stail = new_node;
	}

	return (1);
}

/**
 * shash_table_get - Retrieves the value associated with a key
 * @ht: The sorted hash table to search
 * @key: The key to search for
 * Return: The value associated with the key, or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current_node;

	if (!ht || !key)
		return (NULL);

	current_node = ht->shead;

	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->snext;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints the sorted hash table
 * @ht: The sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current_node;

	if (!ht)
		return;

	current_node = ht->shead;

	printf("{");
	while (current_node)
	{
		printf("'%s': '%s'", current_node->key, current_node->value);
		current_node = current_node->snext;
		if (current_node)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in reverse order
 * @ht: The sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current_node;

	if (!ht)
		return;

	current_node = ht->stail;

	printf("{");
	while (current_node)
	{
		printf("'%s': '%s'", current_node->key, current_node->value);
		current_node = current_node->sprev;
		if (current_node)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current_node, *next_node;

	if (!ht)
		return;

	current_node = ht->shead;

	while (current_node)
	{
		next_node = current_node->snext;
		free(current_node->key);
		free(current_node->value);
		free(current_node);
		current_node = next_node;
	}

	free(ht->array);
	free(ht);
}
