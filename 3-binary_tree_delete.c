#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_delete - deletes the entire binary tree
 * @tree: the tree bding deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		printf("___start___/n");
		if (tree->left)
		{
			printf("go left");
			binary_tree_delete(tree->left);
			printf("---go outll/n");
		}
		if (tree->right)
		{
			printf("go to right");
			binary_tree_delete(tree->right);
			printf("--go outrr/n");
		}
		free(tree);
		printf("freed succesfully/n");
	}
}
