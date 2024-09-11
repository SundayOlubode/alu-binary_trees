#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Delete a Binary tree
 *
 * @tree: Pointer to the root node
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
  if (tree != NULL)
  {
    // tree = NULL;
    free(tree);
  }
  return;
}