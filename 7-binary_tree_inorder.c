#include "binary_trees.h"

/**
 * binary_tree_inorder - travers the given tree in inorder and calls a function
 * @tree: the tree being traversed
 * @func: the function to call each time the tree is traversed
 */
void binary_tree_inorder(const binary_tree_t *tree, void (func)(int))
{
	if (tree && func)
	{
		if (tree->left)
			binary_tree_inorder(tree->left, func);
		func(tree->n);
		if (tree->right)
			binary_tree_inorder(tree->right, func);
	}
}
