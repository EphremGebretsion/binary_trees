#include "binary_trees.h"

/**
 * tree_height - computes the height of a tree
 * @tree: the tree with the height
 * Return: returns the tree height
 */
int tree_height(const binary_tree_t *tree)
{
	int height = 0, left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		height++;
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
 * only_two - check all the inside nodes have exactly two nodes
 * @tree: the root of the tree
 * @height: the height of the tree to track we are still inside node
 * Return: returns 1 if all the nodes have 2 nodes else returns 0
 */
int only_two(const binary_tree_t *tree, int height)
{
	int check = 1, h = height;

	if (height == 0)
		return (1);
	if (tree->left && tree->right)
	{
		h--;
		check *= only_two(tree->left, h);
		check *= only_two(tree->right, h);
	}
	else
		return (0);

	return (check);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: return 1 if perfect else return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);
	if (!tree->left && !tree->right)
		return (0);
	if (left_height != right_height)
		return (0);

	if (only_two(tree, (left_height + 1)))
	{
		return (1);
	}

	return (0);
}
