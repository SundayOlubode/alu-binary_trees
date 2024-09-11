#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Binary Tre Preorder
 *
 * @tree: Pointer to (sub)tree
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL || func != NULL)
	{
		printf("%d ", tree->n);
		func(tree->left->n);
		func(tree->right->n);
	}
}