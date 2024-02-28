#include "binary_trees.h"

/**
 * binary_tree_size - computes the size of a tree
 * @tree: the tree where the size is being computed
 * Return: returns the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1, left_size = 0, right_size = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_size = binary_tree_size(tree->left);
	if (tree->right)
		right_size = binary_tree_size(tree->right);

	size += (left_size + right_size);

	return (size);
}
