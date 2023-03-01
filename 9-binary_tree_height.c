#include "binary_trees.h"

/**
 * binary_tree_height - computes the height of a tree
 * @tree: the tree with the height
 * Return: returns the tree height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0, left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		height++;
	if (tree->left)
		left_height = binary_tree_height(tree->left);
	if (tree->right)
		right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		height += left_height;
	else
		height += right_height;

	return (height);
}
