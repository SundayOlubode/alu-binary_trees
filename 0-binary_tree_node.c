#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Create a Binary tree node
 *
 * @parent: Pointer to the parent node
 * @value: Integer stored in the node
 * @return: pointer to a binary_tree_t
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		printf("Memory allocation failed for a new node\n");
		return NULL;
	}

	new_node->parent = parent;
	new_node->n = value;
	return new_node;
}
