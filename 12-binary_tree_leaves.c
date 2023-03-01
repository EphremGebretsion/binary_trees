#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in the tree
 * @tree: the tree to count the leaves
 * Return: returns the total count of all leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	if (tree->left)
		count += (size_t)binary_tree_leaves(tree->left);
	if (tree->right)
		count += (size_t)binary_tree_leaves(tree->right);

	return (count);
}
