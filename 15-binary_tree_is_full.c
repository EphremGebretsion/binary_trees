#include "binary_trees.h"


/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: returns 1 if full else return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int found = 1;

	if (!tree)
		return (0);

	if ((!(tree->left) && tree->right) || (tree->left && !(tree->right)))
		return (0);
	if (tree->left && tree->right)
	{
		found *= binary_tree_is_full(tree->left);
		found *= binary_tree_is_full(tree->right);
	}

	return (found);
}
