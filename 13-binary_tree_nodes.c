#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in the tree
 * @tree: root node of the tree to count the number of nodes
 * Return: returns the total count of nodes with child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		count++;
	if (tree->left)
		count += binary_tree_nodes(tree->left);
	if (tree->right)
		count += binary_tree_nodes(tree->right);

	return (count);
}
