#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 * Return: returns the siblings node if found else retuns NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!(node->parent))
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	return (node->parent->left);
}
