#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: is a pointer to the root node of the tree to rotate
 * Return: returns the pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *right_tree;

	if (!tree)
		return (NULL);
	if (tree->right)
	{
		right_tree = tree->right;
		tree->right = right_tree->left;
		if (tree->right)
			tree->right->parent = tree;
		right_tree->parent = tree->parent;
		tree->parent = right_tree;
		right_tree->left = tree;
	}

	return (right_tree);
}
