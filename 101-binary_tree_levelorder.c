#include "binary_trees.h"

/**
<<<<<<< HEAD
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
=======
 * binary_tree_levelorder - traverst a binary tree using level-order traverse
 * @tree: tree to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level, maxlevel;

	if (!tree || !func)
		return;

	maxlevel = binary_tree_height(tree) + 1;

	for (level = 1; level <= maxlevel; level++)
		btlo_helper(tree, func, level);
}

/**
 * btlo_helper - goes through a binary tree using post-order traverse
 * @tree: tree to traverse
 * @func: pointer to a function to call for each node
 * @level: the level of the tree to call func upon
 */
void btlo_helper(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (level == 1)
		func(tree->n);
	else
	{
		btlo_helper(tree->left, func, level - 1);
		btlo_helper(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
>>>>>>> 9412f10d87425c5bd218cecaf1d2450a71aeef3e
