#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the unle
 * Return: returns the ucle node if it's found else return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent = NULL;

	if (!node)
		return (NULL);
	if (!(node->parent))
		return (NULL);
	if (node->parent->parent)
	{
		grand_parent = node->parent->parent;
		if (grand_parent->left == node->parent)
			return (grand_parent->right);
		else
			return (grand_parent->left);
	}
	return (NULL);
}
