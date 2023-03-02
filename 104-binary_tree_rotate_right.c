#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_rotate_right - Function that  rotates right the binary tree.
 * @tree: The root node of the three
 * Return: Pointer node of the new node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pivot;

	if (tree == NULL || tree->left == NULL)
	{
		return (NULL);
	}
	pivot = tree->left;
	tree->left = pivot->right;
	if (pivot->right != NULL)
	{
		pivot->right->parent = tree;
	}
	pivot->right = tree;
	pivot->parent = tree->parent;
	tree->parent = pivot;
	return (pivot);

=======
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
>>>>>>> d4631d92d70e37f5e7a466e23c3354e461787b3f
