#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - deletes the entire tree
 * @tree: pointer to the root of node
 *
 * Return: no shit
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *ptr = tree;

	if (ptr == NULL)
		EXIT_SUCCESS;
	if (ptr->left == NULL)
	{
		if (ptr->right == NULL)
			free(ptr);
		else
			binary_tree_delete(ptr->right);
	}
	else
		binary_tree_delete(ptr->left);
	free(ptr);
}