#include "binary_trees.h"

/**
<<<<<<< HEAD
 * look_in - looks for another node in a given node tree
 * @tree: the tree to find the node
 * @node: the node being looked for
 * Return: returns the tree itself if a node is found
 */
binary_tree_t *look_in(const binary_tree_t *tree, 
		const binary_tree_t *node)
{
	binary_tree_t *check = NULL;

	if (!tree)
		return (NULL);
	if (node == tree->left || node == tree->right)
		return ((binary_tree_t *)tree);
	if (tree->left)
	{
		check = look_in(tree->left, node);
		if (check)
			return (check);
	}
	if (tree->right)
		check = look_in(tree->right, node);

	return (check);
}
/**
 * look_in_parents - search for a node in the parents of another node
 * @first: the first node
 * @second: the second node
 * Return: returns the parent node if the node is found else return NULL
 */
binary_tree_t *look_in_parents(const binary_tree_t *first, 
		const binary_tree_t *second)
{
	binary_tree_t *check = NULL;

	if (!first)
		return (NULL);
	check = look_in(first, second);
	if (!check)
		check = look_in_parents(first->parent, second);
	else
		check = (binary_tree_t *)first;

	return (check);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: returns the lowest common ancestor node, if not found returns NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *ancestor = NULL;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	ancestor = look_in(first, second);
	if (ancestor)
		return ((binary_tree_t *)first);
	ancestor = look_in(second, first);
	if (ancestor)
		return ((binary_tree_t *)second);

	ancestor = look_in_parents(first->parent, second);

	return (ancestor);
=======
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node to find the ancestor
 * @second: a pointer to the second node to find the ancestor
 *
 * Return: pointer to the ancestor node
 *         NULL if there is no ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t depth_first, depth_second;

	if (!first || !second)
		return (NULL);

	depth_first = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);

	while (depth_first > depth_second)
	{
		first = first->parent;
		depth_first--;
	}
	while (depth_second > depth_first)
	{
		second = second->parent;
		depth_second--;
	}
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: node to calculate the depth of
 *
 * Return: depth of the node
 *         0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
>>>>>>> 9412f10d87425c5bd218cecaf1d2450a71aeef3e
}
