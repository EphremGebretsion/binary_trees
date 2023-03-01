#include "binary_trees.h"

/**
 * binary_tree_depth - computes the depth of a tree node
 * @tree: the tree node
 * Return: returns the depth of a node in a tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	if (tree->parent)
	{
		depth++;
		depth += binary_tree_depth(tree->parent);
	}
	return (depth);
}
