#include "binary_trees.h"

/**
 * tree_height - computes the height of a tree
 * @tree: the tree with the height
 * Return: returns the tree height
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t height = 1, left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_height = tree_height(tree->left);
	if (tree->right)
		right_height = tree_height(tree->right);

	if (left_height > right_height)
		height += left_height;
	else
		height += right_height;
	return (height);
}
/**
 * binary_tree_balance - mesures the balance factor of binary tree
 * @tree: pointer to the root node of the tree to meadute the balance
 * Return: returns the balace factor (left length - right lenght)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_height = (int)tree_height(tree->left);
	if (tree->right)
		right_height = (int)tree_height(tree->right);

	return (left_height - right_height);
}
