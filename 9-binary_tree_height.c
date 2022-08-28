#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - see the height of a binary tree
 * @tree: Root of treet ot measure
 * 
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *ptr = tree;
	size_t count = -1;

	if (ptr == NULL)
		return (0);
		
	while (ptr != NULL)
	{
		if (ptr->left != NULL)
			ptr = ptr->left;
		else
			ptr = ptr->right;
		count++;
	}

	return (count);
}
