#include "binary_trees.h"

/**
 * binary_tree_preorder - travrse and call the function given in a preorder
 * @tree: the tree being traversed
 * @func: the function to call each time travesing a tree
 */
void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		if (tree->left)
			binary_tree_preorder(tree->left, func);
		if (tree->right)
			binary_tree_preorder(tree->right, func);
	}
}
