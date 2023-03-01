#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if the node is a leaf one in a tree
 * @node: the tree node being checked
 * Return: rerurn 1 if it's a leaf node else return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->left) && !(node->right))
		return (1);
	return (0);
}
