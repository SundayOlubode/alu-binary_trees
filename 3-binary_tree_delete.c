#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_delete_recursive(binary_tree_t *tree)
{
	binary_tree_t *left_node;
	binary_tree_t *right_node;

	if (tree == NULL)
		return (NULL);

	left_node = binary_tree_delete_recursive(tree->left);
	if (left_node)
	{
		free(left_node);
	}
	right_node = binary_tree_delete_recursive(tree->right);
	if (right_node)
	{
		free(right_node);
	}
	return (tree);
}

/**
 * binary_tree_delete - Delete a Binary tree
 *
 * @tree: Pointer to the root node
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_delete_recursive(tree);
}
