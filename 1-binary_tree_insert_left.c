#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Create a Binary tree node
 *
 * @parent: Pointer to the parent node
 * @value: Integer to store in the new left node
 * Return: Pointer to the new left node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	// Move the variable declaration to the beginning of the block
	binary_tree_t *new_left_node;
	binary_tree_t *old_left_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_left_node = malloc(sizeof(binary_tree_t));
	if (new_left_node == NULL)
	{
		return (NULL);
	}

	new_left_node->n = value;
	new_left_node->left = NULL;
	new_left_node->right = NULL;
	new_left_node->parent = parent;

	if (parent->left)
	{
		old_left_node = parent->left;
		parent->left = new_left_node;
		new_left_node->left = old_left_node;
		old_left_node->parent = new_left_node; // Update the old node's parent pointer
	}
	else
	{
		parent->left = new_left_node;
	}

	return (new_left_node);
}
