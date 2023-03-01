#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates an instance of binary_tree node
 * @parent: address to the parent node
 * @value: the value to the node
 * Return: returns the node created if success else return NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
