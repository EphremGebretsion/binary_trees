#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_delete - deletes the entire binary tree
 * @tree: the tree bding deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left)
		{
			binary_tree_delete(tree->left);
		}
		if (tree->right)
		{
			binary_tree_delete(tree->right);
		}
		free(tree);
	}
}
