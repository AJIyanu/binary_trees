#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - create a binary tree node
 * @parent: pointer to the parent node to create
 * @value: value to put into new node
 *
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		parent = malloc(sizeof(binary_tree_t));
		if (parent == NULL)
			return (NULL);
		parent->n = value;
		parent->left = NULL;
		parent->right = NULL;
	}

	return (parent);
	
}
