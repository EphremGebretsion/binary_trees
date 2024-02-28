#include "binary_trees.h"

/**
 * binary_tree_insert_left -insert an element to the left of the parent node
 * @parent: the parent node
 * @value: the value being added in to the new node
 * Return: returns the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);
	node->left = parent->left;
	parent->left = node;
	if (node->left)
		node->left->parent = node;
	return (node);
}
