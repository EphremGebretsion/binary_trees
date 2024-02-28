#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node created in the right
 * @parent: the parent node
 * @value: the value being added to the new node
 * Return: return the new node created
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);

	node->right = parent->right;
	parent->right = node;
	if (node->right)
		node->right->parent = node;

	return (node);
}
