#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a binary tree in level-order traversal
 * @tree: the tree being traversed
 * @func: a function to call each time the tree is traversed
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		if (tree->left)
			func(tree->left->n);
		if (tree->right)
			func(tree->right->n);
		if (tree->left)
		{
			binary_tree_levelorder(tree->left->left, func);
			binary_tree_levelorder(tree->left->right, func);
		}
		if (tree->right)
		{
			binary_tree_levelorder(tree->right->left, func);
			binary_tree_levelorder(tree->right->right, func);
		}
	}
}
