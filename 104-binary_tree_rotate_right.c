#include "binary_trees.h"

/**
 * binary_tree_rotate_right -rotates the binary tree in right-rotation
 * @tree: the tree bing rotated
 * Return: returns the new rotated tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *left_tree = NULL;

	if (!tree)
		return (NULL);
	if (tree->left)
	{
		left_tree = tree->left;
		left_tree->parent = tree->parent;
		tree->parent = left_tree;
		tree->left = left_tree->right;
		left_tree->right = tree;
		if (tree->left)
			tree->left->parent = tree;
	}

	return (left_tree);
}
