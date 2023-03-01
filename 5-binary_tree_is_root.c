#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if the binary tree node is a root node
 * @node: the tree node being checked
 * Return: return 1 if it's a root else return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->parent))
		return (1);
	return (0);
}
